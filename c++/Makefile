# librerias GCode
#
# Descripcion: conjunto de librerías con diversas utilidades para el desarrollo
# de aplicaciones y vídeo juegos en C/C++, Java, JavaScript, entre otros
#
# Makefile
#
# Autor: SamuelGCode
# correo:samale456@gmail.com



#macros personalizadas
LINK=-l
DIR_CORE=src/
DIR_BUILD=build/
DIR_LIB=lib/
DIR_INCLUDE=include/
LIB_DDS_OBJ_BUILD=build/node.o build/list.o build/stack.o build/queue.o build/tree.o

#libreria estatica para el control de estructura dinamica de datos 
#(Dynamic Data Structure)
SGCode-libs: libSGCode-dds
	echo "Todas las libreria de SGCode fueron compiladas con exito"

libSGCode-dds: libSGCode-dds.a #libSGCode-dds.so
	echo "libdds completada"

libSGCode-dds.a: node list stack queue tree
	ar -rv $(DIR_LIB)libSGCode-dds.a $(LIB_DDS_OBJ_BUILD)
	echo "libreria estatica: libdds.a terminada"

#libreria dinamica igual a la anterior
libSGCode-dds.so: node list stack queue tree
	ld -o libSGCode-dds.so $(LIB_DDS_OBJ_BUILD) -shared
	echo "libreria dinamica: libdds.so terminada"

#clases para el control de nodos
node:
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)dds/node.cpp -o $(DIR_BUILD)node.o -I$(DIR_INCLUDE)

#clases para el control de listas dinamicas
list: node
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)dds/list.cpp -o $(DIR_BUILD)list.o -I$(DIR_INCLUDE)

#clases para el control de pilas dinamicas
stack: node
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)dds/stack.cpp -o $(DIR_BUILD)stack.o -I$(DIR_INCLUDE)

#clases para el control de colas dinamicas
queue: node
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)dds/queue.cpp -o $(DIR_BUILD)queue.o -I$(DIR_INCLUDE)

#clases para el control de arboles dinamicas
tree: node
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)dds/tree.cpp -o $(DIR_BUILD)tree.o -I$(DIR_INCLUDE)

#borrar todos los ficheros objetos y librerias 
clean: node
	$(RM) $(DIR_BUILD)*.o $(DIR_LIB)*.a $(DIR_LIB)*.so