/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file sum_of_squares.cc
  * @author Estela Fernández Trujillo alu0101560205@ull.edu.es
  * @date Oct 30 2023
  * @brief This program reads a number and prints the squares
  * @bug There are no known bugs
  */

#include <iostream>
#include <cmath>

int main() {
  int number{0}, result{0};
  std::cin >> number;
  for (int i = 1; i <= number; i++) {
    result += pow(i, 2);
  }
  std::cout << result << std::endl;
}
