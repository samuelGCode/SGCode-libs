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
LIB_DDS_OBJ_BUILD=build/node.o build/list.o build/stack.o \
 build/queue.o build/tree.o
LIB_SHAH_OBJ_BUILD=build/md5.o build/sha1.o build/sha224.o \
 build/sha256.o build/sha384.o build/sha512.o

#libreria estatica para el control de estructura dinamica de datos 
#(Dynamic Data Structure)
SGCode: libSGCode-dds libSGCode-shah
	echo "Todas las libreria de SGCode fueron compiladas con exito"


####Libreria libSGCode-dds (Samuel Game Code Dynamic Data Structure)####
libSGCode-dds: libSGCode-dds.a #libSGCode-dds.so
	#echo "libdds completada"

libSGCode-dds.a: node list stack queue tree
	ar -rv $(DIR_LIB)libSGCode-dds.a $(LIB_DDS_OBJ_BUILD)
	#echo "libreria estatica: libdds.a terminada"

#libreria dinamica igual a la anterior
libSGCode-dds.so: node list stack queue tree
	ld -o libSGCode-dds.so $(LIB_DDS_OBJ_BUILD) -shared
	#echo "libreria dinamica: libdds.so terminada"

#clases para el control de nodos
node:
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)dds/node.cpp -o $(DIR_BUILD)node.o -I$(DIR_INCLUDE)dds/

#clases para el control de listas dinamicas
list: node
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)dds/list.cpp -o $(DIR_BUILD)list.o -I$(DIR_INCLUDE)dds/

#clases para el control de pilas dinamicas
stack: node
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)dds/stack.cpp -o $(DIR_BUILD)stack.o -I$(DIR_INCLUDE)dds/

#clases para el control de colas dinamicas
queue: node
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)dds/queue.cpp -o $(DIR_BUILD)queue.o -I$(DIR_INCLUDE)dds/

#clases para el control de arboles dinamicas
tree: node
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)dds/tree.cpp -o $(DIR_BUILD)tree.o -I$(DIR_INCLUDE)dds/
####fin libSGCode-dds####


####Libreria criptografica libSGCode-shah (Samuel Game Code shah)####
libSGCode-shah: libSGCode-shah.a #libSGCode-shah.so
	#echo "libshah completada"

libSGCode-shah.a: md5 sha1 sha224 sha256 sha384 sha512
	ar -rv $(DIR_LIB)libSGCode-shah.a $(LIB_SHAH_OBJ_BUILD)

libSGCode-shah.so: md5 sha1 sha224 sha256 sha384 sha512
	ld -o libSGCode-shah.so $(LIB_SHAH_OBJ_BUILD) -shared

md5:
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)shah/md5.cpp -o $(DIR_BUILD)md5.o -I$(DIR_INCLUDE)shah/

sha1:
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)shah/sha1.cpp -o $(DIR_BUILD)sha1.o -I$(DIR_INCLUDE)shah/

sha224:
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)shah/sha224.cpp -o $(DIR_BUILD)sha224.o -I$(DIR_INCLUDE)shah/

sha256:
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)shah/sha256.cpp -o $(DIR_BUILD)sha256.o -I$(DIR_INCLUDE)shah/

sha384:
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)shah/sha384.cpp -o $(DIR_BUILD)sha384.o -I$(DIR_INCLUDE)shah/

sha512:
	$(CXX) $(CXXFLAGS) -c $(DIR_CORE)shah/sha512.cpp -o $(DIR_BUILD)sha512.o -I$(DIR_INCLUDE)shah/
####fin libSGCode-shah####


#borrar todos los ficheros objetos y librerias 
clean: node
	$(RM) $(DIR_BUILD)*.o $(DIR_LIB)*.a $(DIR_LIB)*.so