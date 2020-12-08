//Marcelo Fernández Solano
//Steven Vega Zuñiga
//NaviTEC
/* Descripción: NaviTEC es un sistema el cual puede ser utilizado para que los niños registren sus cartas 
				navideñas y ademas Santa y sus ayudantes puedan consultar estas cartas para procesarlas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

    int r, opc = 8, i = 0;
  
    while(opc  != 0){
    	printf("\n\n\t\t\tFELIZ NAVIDAD 2020\n\n\n");
    	printf("\t\t\t   *<|:^) }   \n\n\n");
    	printf("\t\t\nMENU PRINCIPAL\n\n\n");
    	printf ("\t\t\nOpciones\n\n\n");
    	printf("\t\t1. Registro de nino/nina \n");
    	printf("\t\t2. Registro de Ayudante de Santa \n");
    	printf("\t\t3. Registro de juguetes  \n");
    	printf("\t\t4. Catálogos para lugares de domicilio  \n");
    	printf("\t\t5. Registro de comportamiento de nino/nina   \n");
    	printf("\t\t6. Carta para Santa \n");
    	printf("\t\t7. Procesar cartas para Santa \n");
    	printf("\t\t8. Entrega de juguetes \n");
    	printf("\t\t9. Analisis de datos  \n"); 	
    	printf("\nDigite una opcion para continuar: ");
		scanf("%d", &opc);
    	
		switch(opc){
  			case 1: //Registrar nuevos miembros
				printf("\n\nREGISTRO DE NINO/NINA\n\n");
				system("pause");
				system("cls");
				break;
			
			case 2: //Consulta miembro del equipo
				printf("\n\nREGISTO AYUDANTE DE SANTA\n\n");
				system("pause");
				system("cls");
				break;
				
			case 3: //
				printf("\n\nREGISTRO DE JUGUETES\n\n");
				system("pause");
				system("cls");
				break;
				
			case 4:
				printf("\n\nCATALOGOS PARA LUGARES DE DOMICILIO\n\n");
				system("pause");
				system("cls");
				break;
				
			case 5:
				printf("\n\nREGISTO DE COMPORTAMIENTO DE NINO/NINA\n\n");
				system("pause");
				system("cls");
				break;
				
			case 6:
				printf("\n\nCARTA PSRA SANTA\n\n");
				system("pause");
				system("cls");
				break;
			
			case 7:
				printf("\n\nPROCESAR CARTA PARA SANTA\n\n");
				system("pause");
				system("cls");
				break;
				
			case 8:
				printf("\n\nENTREGA DE JUGUETES\n\n");
				system("pause");
				system("cls");
				break;
				
			case 9:
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

