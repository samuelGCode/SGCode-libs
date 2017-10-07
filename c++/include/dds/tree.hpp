/*
*clases para el control de Arboles
* Destalles:
 */
#ifndef SGCODE_TREE_H
#define SGCODE_TREE_H 1

#include "node.hpp"

namespace SGCode{

	template<class TypeTree>
	class Tree{
	private:
		TypeTree *tree;
		int nElements;
		
	public:
		Tree();
		~Tree();
	};

}
#endif