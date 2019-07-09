
typedef struct _arbol{
	
	char dato;
	struct _arbol *hijoizq,*hijoder;
		
}Arbol;
///////////////////////////////////////////
Arbol *Crear_Nodo(char caracter){
	
	Arbol *un_nodo;
	un_nodo=malloc(sizeof(Arbol));
	un_nodo->dato=caracter;
	un_nodo->hijoizq=NULL;
	un_nodo->hijoder=NULL;
	return (un_nodo);
	
}
//////////////////////////////////////
Arbol *Insertar_Nodo(Arbol *un_nodo,char caracter){
	
	if(un_nodo==NULL){
		
		un_nodo=Crear_Nodo(caracter);
		
	}else{
		
		if(un_nodo->dato!='N'){
			
			un_nodo->hijoizq=Insertar_Nodo(un_nodo->hijoizq,caracter);
			
		}else{
			
			un_nodo->hijoder=Insertar_Nodo(un_nodo->hijoder,caracter);
			
		}
		
		
	}

	return (un_nodo);
}
////////////////////////////////////////////////////
Arbol *Crea_Arbol(Arbol *un_nodo, char *nombre_archivo,char caracter){
	
	FILE *archivo;
	archivo=fopen("arbol.txt","r");
	if(archivo==NULL){
		return 0;
	}else{

			while(caracter!= EOF){
				
				caracter=fgetc(archivo);		
				un_nodo=Insertar_Nodo(un_nodo,caracter);
				
			}
	fclose(archivo);
	}
	return(un_nodo);
}

//////////////////////////////////////////// (2^(n+1))-


void Recorre_Arbol(Arbol *un_nodo){  //orden ascendente
	
    if (un_nodo!=NULL){	

		printf ("%c", un_nodo->dato);
        Recorre_Arbol(un_nodo->hijoizq);
        Recorre_Arbol(un_nodo->hijoder);
        
      
        
    }
}

