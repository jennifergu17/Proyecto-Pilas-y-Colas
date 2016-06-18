#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct pila {
	char letra;
	pila * siguiente;
};

pila * iniciar;
pila * auxi;
pila * final;


void apilar(char letra2){
	if (iniciar==NULL){
		iniciar= new(pila);
		iniciar->letra=letra2;
		final=iniciar;
	}else{
		auxi=new(pila);
		auxi->siguiente=iniciar;
		auxi->letra=letra2;
		iniciar=auxi;
	}
	final->siguiente=NULL;
}



void mostrart(){
	auxi= iniciar;
	if(iniciar==NULL){
		cout <<"No Hay Nodos Apilados" << endl;
	}else{
		while (auxi != NULL ){
			cout <<auxi->letra<< endl;
			auxi = auxi->siguiente;

	}
}
}

void adesapilar(){
	auxi= iniciar;
	if(iniciar==NULL){
		cout <<"No Hay Nodos Apilados" << endl;
	}else{
		if(auxi != NULL ){
			cout <<auxi->letra<< endl;
		}
	}
}


void desapilar(){
	struct pila *pant=NULL;
	if (iniciar==NULL){
		cout<<"No hay nodos apilados" << endl;
	}
	else {
		auxi=iniciar;
		iniciar=iniciar->siguiente;
		pant=auxi;
		pant->siguiente=auxi->siguiente;

	}
}

void tamanoo(){
	int contador=0;
	auxi= iniciar;
	if(iniciar==NULL){
		cout <<"No Hay Nodos Apilados" << endl;
	}else{
		while (auxi != NULL ){
            contador++;
			auxi = auxi->siguiente;
	}
	cout<<"Nodos Apilados  "<<contador<<endl;
}
}
