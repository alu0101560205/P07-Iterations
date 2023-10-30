/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file rounding.cc
  * @author Estela Fernández Trujillo alu0101560205@ull.edu.es
  * @date Oct 30 2023
  * @brief The program reads a real number x≥0 and prints ⌊ x ⌋ 
  * (the floor of x), ⌈ x ⌉ (the ceiling of x), and the rounding of x.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P92613_en
  */

#include <iostream>
#include <cmath>

int main() {
  double number{0};
  std::cin >> number;
  std::cout << static_cast<int>(std::floor(number)) << " " 
  << static_cast<int>(std::ceil(number)) << " "
  << static_cast<int>(std::round(number)) << std::endl;
  return 0;
}
