/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file sum_of_digits.cc
  * @author Estela Fernández Trujillo alu0101560205@ull.edu.es
  * @date Oct 27 2023
  * @brief The program reads a natural number and prints the sum of digits of
  * its number.
  * @bug There are no known bugs
  */

#include <iostream>

int SumDigits(int number) {
  int sum_of_digits{0};
  while (number != 0) {
    sum_of_digits += (number % 10);
    number /= 10;
  }
  return sum_of_digits;
}

void PrintProgramPurpose() {
  std::cout << "This program reads a natural number and prints the sum ";
  std::cout << "of the digits of its number. " << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called " << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << " A natural number" << std::endl;
    return false;
  }
  return true;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  !CheckCorrectParameters(argc, argv, 2);
  int number = atoi(argv[1]);
  std::cout << "The sum of the digits is " << SumDigits(number)  << "." << std::endl;
  return 0;
}
