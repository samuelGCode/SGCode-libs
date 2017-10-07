/*
*
* 
 */
#include <iostream>
#include "list.hpp"

using namespace SGCode;

//constructor inicializador
template<class TypeList>
List<TypeList>::List(){
	this->listNode = NULL;
	this->nElements = 0;
}

//constructor para copiar lista
template<class TypeList>
List<TypeList>::List(const List& l){
	if(this->listNode != NULL)
		this->deleteNodes();

	if(this != &l)
		*this = l;
}

//destructor de los datos dinamicos
template<class TypeList>
List<TypeList>::~List(){
	if(this->listNode != NULL)
		this->deleteNodes();
}

//sobrecargar del operador [] para recorrido de la lista 
//Ej: lista["primerNodo"] = nodo;
template<class TypeList>
Node<TypeList>& List<TypeList>::operator[](char* indexText){
	Node<TypeList>* aux = NULL;
	if(this->listNode != NULL)
		aux = this->getNode(indexText);

	return aux;
}

//sobrecarga del operador = para asignacion de nuevas listas
//para evitar la perdida de direcciones de memoria
template<class TypeList>
Node<TypeList>& List<TypeList>::operator=(const List& l){
	if(this != &l)
		if(this->listNode) 
			delete this->listNode;
		if(l.getNElements())
			this->listNode = l.getHead();
		else
			this->listNode = NULL;

		return *this;
	}

//obtener cabesera de la lista
template<class TypeList>
	Node<TypeList>& List<TypeList>::getHead(){
		return this->listNode;
	}

//obtener la cantidad de nodos en la lista
template<class TypeList>
	int List<TypeList>::getNElements(){
		return this->nElements;
	}

//obtener nodo por index numerico
template<class TypeList>
	Node<TypeList>& List<TypeList>::getNode(int index){

	}

//obtener nodo por index texto
template<class TypeList>
	Node<TypeList>& List<TypeList>::getNode(char* indexText){

	}

//obtener index numerico referenciando el index texto
template<class TypeList>
	int List<TypeList>::getIndex(char* indexText){

	}

//obtener index texto referenciando el index numerico
template<class TypeList>
	char* List<TypeList>::getIndexText(int index){

	}

//insertar nodo nuevo sin asignacion de index texto
//el index numerico lo asigna el sistema de listas
template<class TypeList>
	bool List<TypeList>::pushNode(Node<TypeList>* nd){

	}
//insertar nodo nuevo asignando de index texto
//el index numerico lo asigna el sistema de listas
template<class TypeList>
	bool List<TypeList>::pushNode(char* indexText, Node<TypeList>* nd){

	}

//modificacion de los datos de un nodo 
//referenciandolo por su index numerico
template<class TypeList>
	bool List<TypeList>::setDataNode(int index, TypeList* nd){

	}
//modificacion de los datos de un nodo 
//referenciandolo por su index texto
template<class TypeList>
	bool List<TypeList>::setDataNode(char* indexText, Node<TypeList>* nd){

	}

//cambiar nombre del index text de un nodo referenciado por el index numerico
template<class TypeList>
	bool List<TypeList>::setIndexTextName(int index, char* newName){

	}

//borrar nodo referenciado por el index numerico
template<class TypeList>
	bool List<TypeList>::deleteNode(int index){

	}
//borrar nodo referenciado por el index texto
template<class TypeList>
	bool List<TypeList>::deleteNode(char* indexText){

	}