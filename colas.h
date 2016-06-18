#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;



struct cola {
	char letra;
	cola * siguiente;
};

cola * inicio;
cola * auxiliar;
cola * fin;

void push(char letra2){
	if (inicio==NULL){
		inicio= new(cola);
		inicio->letra=letra2;
		fin=inicio;
	}else{
		auxiliar=new(cola);
		fin->siguiente=auxiliar;
		auxiliar->letra=letra2;
		fin=auxiliar;
	}
	fin->siguiente=NULL;
}

void todos(){
	auxiliar= inicio;
	if(inicio==NULL){
		cout <<"No hay nodos encolados" << endl;
	}else{
		while (auxiliar != NULL ){
			cout <<auxiliar->letra<< endl;
			auxiliar = auxiliar->siguiente;

	}
}
}

void top(){
	auxiliar= inicio;
	if(inicio==NULL){
		cout <<"No hay nodos encolados" << endl;
	}else{
		if(auxiliar != NULL ){
			cout <<auxiliar->letra<< endl;
		}
	}
}

void pop(){
	struct cola *pant=NULL;
	if (inicio==NULL){
		cout<<"No hay nodos encolados" << endl;
	}
	else {
		auxiliar=inicio;
		inicio=inicio->siguiente;
		pant=auxiliar;
		pant->siguiente=auxiliar->siguiente;

	}
}

void tamano(){
	int contador=0;
	auxiliar= inicio;
	if(inicio==NULL){
		cout <<"No hay nodos encolados" << endl;
	}else{
		while (auxiliar != NULL ){
            contador++;

			auxiliar = auxiliar->siguiente;
	}
	cout<<"Nodos encolados  "<<contador<<endl;
}
}
