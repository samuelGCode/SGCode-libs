/*
* clases para el control de Listas Dinamicas
* Detalles:
*  Listas enlazadas
*  Listas doblemente enlazadas
*  Listas circulares
 */
#ifndef SGCODE_LIST_H
#define SGCODE_LIST_H 1

#include "node.hpp"

namespace SGCode{

	template<class TypeList>
	class List{
	private:
		//puntero principal a la lista
		Node<TypeList>* head;
		//cantidad de elementos de la lista
		int nElements;

	public:
		//constructor inicializador
		List();
		//constructor para copiar lista
		List(const List& l);
		//destructor de los datos dinamicos
		~List();

		//sobrecargar del operador [] para recorrido de la lista 
		//Ej: lista["primerNodo"] = nodo;
		Node<TypeList>& operator[](char* indexText);

		//sobrecarga del operador = para asignacion de nuevas listas
		//para evitar la perdida de direcciones de memoria
		Node<TypeList>& operator=(const List& l);

		//obtener la cantidad de nodos en la lista
		int getNElements();

		//obtener cabesera de la lista
		Node<TypeList>& getHead();
		
		//obtener nodo por index numerico
		Node<TypeList>& getNode(int index);
		//obtener nodo por index texto
		Node<TypeList>& getNode(char* indexText);

		//obtener index numerico referenciando el index texto
		int getIndex(char* indexText);

		//obtener index texto referenciando el index numerico
		char* getIndexText(int index);

		//insertar nodo nuevo sin asignacion de index texto
		//el index numerico lo asigna el sistema de listas
		bool pushNode(Node<TypeList>* nd);
		//insertar nodo nuevo asignando de index texto
		//el index numerico lo asigna el sistema de listas
		bool pushNode(char* indexText, Node<TypeList>* nd);

		//modificacion de los datos de un nodo 
		//referenciandolo por su index numerico
		bool setDataNode(int index, TypeList* nd);
		//modificacion de los datos de un nodo 
		//referenciandolo por su index texto
		bool setDataNode(char* indexText, Node<TypeList>* nd);

		//cambiar nombre del index text de un nodo referenciado por el index numerico
		bool setIndexTextName(int index, char* newName);

		//borrar nodo referenciado por el index numerico
		bool deleteNode(int index);
		//borrar nodo referenciado por el index texto
		bool deleteNode(char* indexText); 

	private:
		//borrar todos los nodos de la lista
		bool deleteNodes();
	};
	
}
#endif