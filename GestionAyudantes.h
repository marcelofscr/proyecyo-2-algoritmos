//Marcelo Fernández Solano 2019347928
//Steven Vega Zuñiga
//NaviTEC
/* Descripción: NaviTEC es un sistema el cual puede ser utilizado para que los niños registren sus cartas 
				navideñas y ademas Santa y sus ayudantes puedan consultar estas cartas para procesarlas.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct ayudante{ //Nodo con caracteristicas de un ayudante de santa
    int corre;
    char identificacionAyudante[10]; 
	char nombreAyudante[50];
	char apellidoAyudante[50];
	char puestoAyudante[10];
	char funcionesAyudante[40];
	char fechaInicioAyudante[10];
    struct nodo *sig;
};

typedef struct ayudante *ListaAyudante;
ListaAyudante k, _cabeza;
ListaAyudante _getnodo();

ListaAyudante _getnodo(){
    ListaAyudante k;
    k = (ListaAyudante)malloc(sizeof(struct ayudante));
    if(k == NULL){
		printf("Memoria Insuficiente\a\n");
 	}
    return k;
}

//Funcion para buscar si cedula ha sido registrada anteriormente
int buscarIdAyudante(char identificacionAyudante[10]){
	
	int resultado = 0;
	
	FILE *fp;
	fp = fopen("listaAyudantes.csv", "r");
	
	if(fp == NULL){
		printf("Error al cargar el archivo, intente verificar si el archivo existe o permanece abierto\n");
	}
	
	char line[998];
	
	while(fgets(line, sizeof(line), fp)){ // Realiza una tokenizacion linea por linea
		
		char *token;
		
		token = strtok(line, ","); // Tokeniza la linea a partir de ","
		
		if(strcmp(token, identificacionAyudante) == 0){ // Compara la cedula con el token
			resultado++;
		}
	}
	return resultado;
}
	
	//Funcion para registrar un niño nuevo
void registrarAyudante(ListaAyudante k, char identificacionAyudante[10], char nombreAyudante[50], char apellidoAyudante[50], char puestoAyudante[10], char funcionesAyudante[40], char fechaInicioAyudante[10], int i){
	ListaAyudante r;

	if(r == NULL) //En caso de p vacia
    	printf("ERROR, lista vacia\n\a");
	else{
		r = _getnodo();
		strcpy(r->identificacionAyudante, identificacionAyudante);
		strcpy(r->nombreAyudante, nombreAyudante);
		strcpy(r->apellidoAyudante, apellidoAyudante);
		strcpy(r->puestoAyudante, puestoAyudante);
		strcpy(r->funcionesAyudante, funcionesAyudante);
		strcpy(r->fechaInicioAyudante, fechaInicioAyudante);
		
		// Persistencia de datos de nuevo miembro en listaAyudantes.csv
		FILE *fp;
		fp = fopen("listaAyudantes.csv", "a");
		
		if(fp == NULL){ //En caso de no exixtir el archivo listaMiembros.csv
			printf("Error al cargar el archivo, intente verificar si el archivo existe o permanece abierto\n");
		}
		
		else{
			fprintf(fp, "%s,%s,%s,%s,%s,%s\n", r->identificacionAyudante, r->nombreAyudante, r->apellidoAyudante, r->puestoAyudante, r->funcionesAyudante, r->fechaInicioAyudante);
		
			fclose(fp); //cierra el archivo y finaliza el guardado en memoria
			fp = 0;
			
			printf("\nMiembro ingresado exitosamente\n");
		}
		
		/*q->corre = i;
		q->sig = p->sig;
		p->sig = q;
		p = p->sig;*/
	}
}
