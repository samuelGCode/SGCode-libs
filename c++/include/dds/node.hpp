/*
*clases para el control de Nodos
* Destalles:
*  Nodos con enlace simple (listas elazadas, colas, pilas)
*  Nodos con doble eslace(listas doblemente enlazadas, listas circulares)
*  Nodos con indice (arboles)
 */
#ifndef SGCODE_NODE_H
#define SGCODE_NODE_H 1

namespace SGCode{

	//nodo con enlace simple
	template<class TypeNode>
	class Node{
	private:
		//indice numerico
		long long int index;
		//indice cadena de caracteres
		char* indexText;
		//datos del nodo
		TypeNode data;
		//enlace al siguiente nodo
		Node<TypeNode>* nextNode;
		//enlace al nodo anterior
		Node<TypeNode>* previousNode;

	public:
		//constructor inicializador por defecto
		Node();
		//constructor inicializador
		Node(const TypeNode nd);
		//destructor de los datos dinamicos
		~Node();
		
		TypeNode getData();

		Node<TypeNode>& getNex();

		Node<TypeNode>& getPrevius();
	};

}
#endif