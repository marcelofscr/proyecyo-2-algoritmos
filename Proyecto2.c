//Marcelo Fernández Solano
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

int main(){
	
	char cedula[10];
	char nombre[50];
	char apellido[50];
	char nombreUsuario[30];
	char residencia[50];
	char correo[50];
	char fechaNacimiento[15];
	char edad[6];
	char necesidadesEspeciales[50];
	
	p = getnodo();
	cabeza = p;

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
    	printf("\t\t5. Registro de juguetes  \n");
    	printf("\t\t6. Catálogos para lugares de domicilio  \n");
    	printf("\t\t7. Registro de comportamiento de nino/nina   \n");
    	printf("\t\t8. Carta para Santa \n");
    	printf("\t\t9. Procesar cartas para Santa \n");
    	printf("\t\t10. Entrega de juguetes \n");
    	printf("\t\t11. Analisis de datos  \n");
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
				
				int cedulaEncontrada = buscarCedula(cedula); //Permite conocer si existen miembros ya registrados con cedula ingresada

				if(cedulaEncontrada == 0){
					registrarNinho(p, cedula, nombre, apellido, nombreUsuario, residencia, correo, fechaNacimiento, edad, necesidadesEspeciales, i);
				}
				else{
					printf("El miembro no se puede ingresar porque la cedula ya fue registrada anteriormente\n");
				}
				system("pause");
				system("cls");
				break;
			
			case 2:
				
				printf("\n\nMODIFICAR DATOS DEL NINO/NINA\n\n");
				system("pause");
				system("cls");
				break;
				
			case 3:
				printf("\n\nELIMINAR NINO/NINA DEL REGISTRO\n\n");
				system("pause");
				system("cls");
				break;
			
			case 4: //Consulta miembro del equipo
				printf("\n\nREGISTO AYUDANTE DE SANTA\n\n");
				system("pause");
				system("cls");
				break;
				
			case 5: //
				printf("\n\nREGISTRO DE JUGUETES\n\n");
				system("pause");
				system("cls");
				break;
				
			case 6:
				printf("\n\nCATALOGOS PARA LUGARES DE DOMICILIO\n\n");
				system("pause");
				system("cls");
				break;
				
			case 7:
				printf("\n\nREGISTO DE COMPORTAMIENTO DE NINO/NINA\n\n");
				system("pause");
				system("cls");
				break;
				
			case 8:
				printf("\n\nCARTA PSRA SANTA\n\n");
				system("pause");
				system("cls");
				break;
			
			case 9:
				printf("\n\nPROCESAR CARTA PARA SANTA\n\n");
				system("pause");
				system("cls");
				break;
				
			case 10:
				printf("\n\nENTREGA DE JUGUETES\n\n");
				system("pause");
				system("cls");
				break;
				
			case 11:
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
				printf("\nPot favor ingrese el numero correspondiente a la opcion del menu (0-9)\n");
				system("pause");
				system("cls");
				break;			
		}
	}
    return 0;
}

