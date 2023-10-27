# Universidad de La Laguna
# Escuela Superior de Ingenieria y Tecnología
# Grado en Ingenieria Informatica
# Informatica Basica
#
# @author Estela Fernández Trujillo alu0101560205@ull.edu.es
# @date Oct 19 2023
# @brief Makefile
# 

CXX = g++
CXXFLAGS = -std=c++17 -Wall
OBJ = decimal_to_binary
all: ${OBJ}
${OBJ}: obj_decimal_to_binary
	$(CXX) $(CXXFLAGS) -o $@ $@.o
obj_decimal_to_binary:
	$(CXX) $(CXXFLAGS) -c ${OBJ}.cc
.PHONY: clean
clean :
	rm -rf *.o
	rm -rf ${OBJ}
