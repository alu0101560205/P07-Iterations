/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file decimal_to_binary.cc
  * @author Estela Fernández Trujillo alu0101560205@ull.edu.es
  * @date Oct 3 2023
  * @brief This program reads a decimal number and prints the number in binary.
  * @bug There are no known bugs
  */

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "This program converts a decimal number into a binary number" <<
  std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << " An decimal number" << std::endl;
    return false;
  }
  return true;
}

int DecimalToBinary(int number) {
  int rest{0}, binary{0}, increment{1};
  while (number != 0) {
    rest = number % 2;
    binary += rest * increment;
    increment *= 10;
    number /= 2;
  }
  return binary;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  std::cout << "Everything is fine!. Lets continue with the normal execution..."
  << std::endl << std::endl;
  int number = atoi(argv[1]);
  std::cout << DecimalToBinary(number) << std::endl;
  return 0;
}
