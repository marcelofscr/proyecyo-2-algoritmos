//Marcelo Fernández Solano 2019347928
//Steven Vega Zuñiga
//NaviTEC
/* Descripción: NaviTEC es un sistema el cual puede ser utilizado para que los niños registren sus cartas 
				navideñas y ademas Santa y sus ayudantes puedan consultar estas cartas para procesarlas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct nodoJuguete nodoJuguete;

struct nodoJuguete{
	int codigoJuguete; 
	char nombreJuguete[30];
	char edadMinimaJuguete[5];
	char edadMaximaJuguete[5];
	char descripcionJuguete[20];
	char costoJuguete[20];
	struct nodoJuguete *izq;
	struct nodoJuguete *der;
};

// Definicion de raiz de arbol
nodoJuguete *raiz = NULL;

void insertarJuguete(int codigoJuguete, char nombreJuguete[], char edadMinimaJuguete[], char edadMaximaJuguete[], char descripcionJuguete[], char costoJuguete[])
	{
	nodoJuguete *nuevo;
	nuevo = (struct nodoJuguete*)malloc(sizeof(struct nodoJuguete));
	nuevo->codigoJuguete = codigoJuguete;
	strcpy(nuevo->nombreJuguete, nombreJuguete);
	strcpy(nuevo->edadMinimaJuguete, edadMinimaJuguete);
	strcpy(nuevo->edadMaximaJuguete, edadMaximaJuguete);
	strcpy(nuevo->costoJuguete, costoJuguete);
	
	if(raiz == NULL){
		raiz = nuevo;
		printf("%i", nuevo->codigoJuguete);
	}
	else{
        nodoJuguete *anterior, *aux;
        anterior = NULL;
        aux = raiz;
        while(aux != NULL){
            anterior = aux;
            if(codigoJuguete < aux->codigoJuguete)
                aux = aux->izq;
            else
                aux = aux->der;
        }
        if(codigoJuguete < anterior->codigoJuguete){
            anterior->izq = nuevo;
        }
        else{
            anterior->der = nuevo;
    	}
    }
}

void imprimirEnOrden(nodoJuguete *recorrer)
{
    if (recorrer != NULL)
    {
        imprimirEnOrden(recorrer->izq);
        
        FILE *fp;
		fp = fopen("listaJuguetes.csv", "a");
		
		if(fp == NULL){ //En caso de no exixtir el archivo listaMiembros.csv
			printf("Error al cargar el archivo, intente verificar si el archivo existe o permanece abierto\n");
		}
		else{
			fprintf(fp, "%i,%s,%s,%s,%s,%s\n", recorrer->codigoJuguete, recorrer->nombreJuguete, recorrer->edadMinimaJuguete, recorrer->edadMaximaJuguete, recorrer->descripcionJuguete, recorrer->costoJuguete);
		
			fclose(fp); //cierra el archivo y finaliza el guardado en memoria
			fp = 0;
			
			
			printf("\nMiembro ingresado exitosamente\n");
		}
        printf("%s-", recorrer->nombreJuguete);
        
		imprimirEnOrden(recorrer->der);
    }
}
	
