#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

int main(){
	
	char nombre_archivo[50];
	char caracter;
	Arbol *un_nodo;
	un_nodo=NULL;
	un_nodo=Crea_Arbol(un_nodo,nombre_archivo,caracter);
	Recorre_Arbol(un_nodo);
	
}

