/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file powers.cc
  * @author Estela Fernández Trujillo alu0101560205@ull.edu.es
  * @date Oct 3 2023
  * @brief This program reads a sequence of numbers and prints 
  * the power of base and exponent.
  * @bug There are no known bugs
  */

#include <iostream>
#include <cmath>

int CalculadoraPotencias(int base, int exponente) {
  int resultado = pow(base, exponente);
  return resultado;
}

int main() {
  int base{0};
  int exponente{0};
  while (std::cin >> base >> exponente) {
  if(exponente < 0) {
    return 1;
  }
  std::cout << CalculadoraPotencias(base, exponente) << std::endl;
  }
  return 0;
}
