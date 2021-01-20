//Marcelo Fernández Solano 2019347928
//Steven Vega Zuñiga
//NaviTEC
/* Descripción: NaviTEC es un sistema el cual puede ser utilizado para que los niños registren sus cartas 
				navideñas y ademas Santa y sus ayudantes puedan consultar estas cartas para procesarlas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "GestionNinhos.h"
#include "GestionAyudantes.h"
#include "GestionJuguetes.h"
#include "GestionDomicilios.h"

int main(){
	
	char cedula[10]; // Elementos de registro niño nuevo
	char nombre[50];
	char apellido[50];
	char nombreUsuario[30];
	char residencia[50];
	char correo[50];
	char fechaNacimiento[15];
	char edad[6];
	char necesidadesEspeciales[50];
	char comportamientoNinho[20] = "S/C"; // Estado inicial "Sin calificar"
	
	char cedulaModificarNinho[10]; // Cedula del niño que desea modificar
	char cedulaEliminarNinho[10]; // Cedula del niño que desea eliminar
	
	char identificacionAyudante[10]; // Elementos de registro ayudantes
	char nombreAyudante[50];
	char apellidoAyudante[50];
	char puestoAyudante[10];
	char funcionesAyudante[40];
	char fechaInicioAyudante[10];
	
	char identificacionModificarAyudante[10]; // Identificacion para modificar ayudante
	char identificacionEliminarAyudante[10]; // Identificacion para eliminar ayudante
	
	int codigoJuguete; // Elementos de registro juguete nuevo
	char nombreJuguete[30];
	char edadMinimaJuguete[5];
	char edadMaximaJuguete[5];
	char descripcionJuguete[20];
	char costoJuguete[20];
	
	char codigoModificarJuguete[10]; // Codigo del juguete que desea modificar
	char codigoEliminarJuguete[10]; // Codigo del juguete que desea eliminar
	
	char codigoDomicilio[10]; // Elementos de registro de lugares
	char nombreLugarDomicilio[30];
	char codigoPostal[10];
	
	char lugarOrigenRuta[30]; // Elementos de registro de rutas
	char lugarDestinoRuta[30];
	int tiempoEstimadoRuta;
	int distanciaRuta;
	
	char nombreModificarLugar[30]; //Nombre del lugar que se desea modificar
	char nombreEliminarLugar[30]; //Nombre del lugar que se desea eliminar
	
	p = getnodo(); // Crea puntero para lista de niños
	cabeza = p;
	
	k = _getnodo(); // Crea puntero para lista de ayudantes de santa
	_cabeza = k;
	
	
	nodoJuguete *busca;

    int r, opc = 8, i = 0;
  
    while(opc  != 0){
    	printf("\n\t\t\tFELIZ NAVIDAD 2020\n\n\n");
    	printf("\t\t\t   *<|:^) }   \n\n");
    	printf("\t\t\nMENU PRINCIPAL\n\n\n");
    	printf ("\t\t\nOpciones\n\n\n");
    	printf("\t\t1. Registro de nino/nina \n");
    	printf("\t\t2. Modificar datos de nino/nina \n");
    	printf("\t\t3. Eliminar nino/nina del registro \n");
    	printf("\t\t4. Registro de Ayudante de Santa \n");
    	printf("\t\t5. Modificar Ayudante de Santa \n");
    	printf("\t\t6. Eliminar Ayudante de Santa \n");
    	printf("\t\t7. Registro de juguetes  \n");
    	printf("\t\t8. Modificar juguetes  \n");
    	printf("\t\t9. Eliminar juguetes  \n");
    	printf("\t\t10. Registrar lugares de domicilio  \n");
    	printf("\t\t11. Modificar lugares de domicilio  \n");
    	printf("\t\t12. Eliminar lugares de domicilio  \n");
    	printf("\t\t13. Registro de comportamiento de nino/nina   \n");
    	printf("\t\t14. Carta para Santa \n");
    	printf("\t\t15. Procesar cartas para Santa \n");
    	printf("\t\t16. Entrega de juguetes \n");
    	printf("\t\t17. Analisis de datos  \n");
		printf("\t\t0. Salir  \n");	
    	printf("\nDigite una opcion para continuar: ");
		scanf("%d", &opc);
    	
		switch(opc){
  			case 1: //Registrar nuevos niños
				printf("\n\nREGISTRO DE NINO/NINA\n\n");
				printf("Ingrese el nombre del nino/nina: ");
				scanf("%s", &nombre);
				printf("Ingrese el apellido del nino/nina: ");
				scanf("%s", &apellido);
				printf("Ingrese el numero de cedula del nino/nina(9 digitos, sin separar por espacios ni guiones): ");
				scanf("%s", &cedula);
				printf("Ingrese el nombre de usuario del nino/nina: ");
				scanf("%s", &nombreUsuario);
				printf("Ingrese la recidencia del nino/nina: ");
				scanf("%s", &residencia);
				printf("Ingrese el correo del nino/nina: ");
				scanf("%s", &correo);
				printf("Ingrese la fecha de nacimiento del nino/nina (En formato DD/MM/AAAA): ");
				scanf("%s", &fechaNacimiento);
				printf("Ingrese la edad del nino/nina: ");
				scanf("%s", &edad);
				printf("Ingrese las necesidades especiales del nino/nina: ");
				scanf("%s", &necesidadesEspeciales);
				
				i++;
				
				int cedulaEncontrada = buscarCedula(cedula); //Permite conocer si existen niños ya registrados con cedula ingresada

				if(cedulaEncontrada == 0){
					registrarNinho(p, cedula, nombre, apellido, nombreUsuario, residencia, correo, fechaNacimiento, edad, necesidadesEspeciales, comportamientoNinho, i);
				}
				else{
					printf("El nino no se puede ingresar porque la cedula ya fue registrada anteriormente\n");
				}
				system("pause");
				system("cls");
				break;
			
			case 2:
				
				printf("\n\nMODIFICAR DATOS DEL NINO/NINA\n\n");
				printf("Ingrese la cedula del niño que desea modificar: ");
				scanf("%s", cedulaModificarNinho);
				
				system("pause");
				system("cls");
				break;
				
			case 3:
				printf("\n\nELIMINAR NINO/NINA DEL REGISTRO\n\n");
				printf("Ingrese la cedula del niño que desea eliminar: ");
				scanf("%s", cedulaEliminarNinho);
				
				system("pause");
				system("cls");
				break;
			
			case 4: 
				printf("\n\nREGISTO AYUDANTE DE SANTA\n\n");
				printf("Ingrese el nombre del ayudante: ");
				scanf("%s", &nombreAyudante);
				printf("Ingrese el apellido del ayudante: ");
				scanf("%s", &apellidoAyudante);
				printf("Ingrese la identificacion del ayudante: ");
				scanf("%s", &identificacionAyudante);
				printf("Ingrese el puesto del ayudante: ");
				scanf("%s", &puestoAyudante);
				printf("Ingrese las funciones del ayudante: ");
				scanf("%s", &funcionesAyudante);
				printf("Ingrese la fecha de inicio de labores del ayudante: ");
				scanf("%s", &fechaInicioAyudante);
				
				i++;
				
				int identidicacionEncontrada = buscarIdAyudante(identificacionAyudante); //Permite conocer si existen ayudantes ya registrados con identificacion ingresada

				if(identidicacionEncontrada == 0){
					registrarAyudante(k, identificacionAyudante, nombreAyudante, apellidoAyudante, puestoAyudante, funcionesAyudante, fechaInicioAyudante, i);
				}
				else{
					printf("El ayudante no se puede ingresar porque la cedula ya fue registrada anteriormente\n");
				}
				
				system("pause");
				system("cls");
				break;
				
			case 5: 
				printf("\n\nMODIFICAR AYUDANTE DE SANTA\n\n");
				printf("Ingrese la identificacion del ayudante que desea modificar: ");
				scanf("%s", identificacionModificarAyudante);
				
				system("pause");
				system("cls");
				break;
				
			case 6: 
				printf("\n\nELIMINAR AYUDANTE DE SANTA\n\n");
				printf("Ingrese la identificacion del ayudante que desea eliminar: ");
				scanf("%s", identificacionEliminarAyudante);
				
				system("pause");
				system("cls");
				break;
				
			case 7: 
				printf("\n\nREGISTRO DE JUGUETES\n\n");
				printf("Ingrese el nombre del juguete: ");
				scanf("%s", &nombreJuguete);
				printf("Ingrese el codigo del juguete (Formato JUG-123): ");
				scanf("%i", &codigoJuguete);
				printf("Ingrese la edad minima recomendada para utilizar el juguete: ");
				scanf("%s", &edadMinimaJuguete);
				printf("Ingrese la edad maxima recomendada para utilizar el juguete: ");
				scanf("%s", &edadMaximaJuguete);
				printf("Ingrese la descripcion del juguete: ");
				scanf("%s", &descripcionJuguete);
				printf("Ingrese el costo del juguete: ");
				scanf("%s", &costoJuguete);
				//printf("%s", codigoJuguete[1]);
				
				insertarJuguete(codigoJuguete, nombreJuguete, edadMinimaJuguete, edadMaximaJuguete, descripcionJuguete, costoJuguete);
				printf("\nRecorrido enorden: ");
    			imprimirEnOrden(raiz);
				system("pause");
				system("cls");
				break;
			
			case 8:
				printf("\n\nMODIFICAR JUGUETES\n\n");
				system("pause");
				system("cls");
				break;
				
			case 9:
				printf("\n\nELIMINAR JUGUETES\n\n");
				system("pause");
				system("cls");
				break;
				
			case 10:
				printf("\n\nREGISTRAR LUGARES DE DOMICILIO\n\n");
				system("pause");
				system("cls");
				break;
				
			case 11:
				printf("\n\nMODIFICAR LUGARES DE DOMICILIO\n\n");
				system("pause");
				system("cls");
				break;
				
			case 12:
				printf("\n\nELIMINAR LUGARES DE DOMICILIO\n\n");
				system("pause");
				system("cls");
				break;
				
			case 13:
				printf("\n\nREGISTO DE COMPORTAMIENTO DE NINO/NINA\n\n");
				system("pause");
				system("cls");
				break;
				
			case 14:
				printf("\n\nCARTA PSRA SANTA\n\n");
				system("pause");
				system("cls");
				break;
			
			case 15:
				printf("\n\nPROCESAR CARTA PARA SANTA\n\n");
				system("pause");
				system("cls");
				break;
				
			case 16:
				printf("\n\nENTREGA DE JUGUETES\n\n");
				system("pause");
				system("cls");
				break;
				
			case 17:
				printf("\n\nANALISIS DE DATOS\n\n");
				system("pause");
				system("cls");
				break;
				
			case 0:
				printf("\n\n\n\n\nGRACIAS POR PREFERIRNOS!!!\n");
				system("pause");
				system("cls");
				break;
				
			default:
				printf("\nPot favor ingrese el numero correspondiente a la opcion del menu (0-13)\n");
				system("pause");
				system("cls");
				break;			
		}
	}
    return 0;
}

