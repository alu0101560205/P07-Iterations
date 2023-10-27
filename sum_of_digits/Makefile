# Universidad de La Laguna
# Escuela Superior de Ingenieria y Tecnología
# Grado en Ingenieria Informatica
# Informatica Basica
#
# @author Estela Fernández Trujillo alu0101560205@ull.edu.es
# @date Oct 27 2023
# @brief Makefile
# 

CXX = g++
CXXFLAGS = -std=c++17 -Wall
OBJ = sum_of_digits
all: ${OBJ}
${OBJ}: obj_sum_of_digits
	$(CXX) $(CXXFLAGS) -o $@ $@.o
obj_sum_of_digits:
	$(CXX) $(CXXFLAGS) -c ${OBJ}.cc
.PHONY: clean
clean :
	rm -rf *.o
	rm -rf ${OBJ}
