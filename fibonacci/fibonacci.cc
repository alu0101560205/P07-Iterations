/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file fibonacci.cc
  * @author Estela Fernández Trujillo alu0101560205@ull.edu.es
  * @date Oct 3 2023
  * @brief
  * @bug There are no known bugs
  */

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "This program reads a number 'n' and prints the first n " << std::endl;
  std::cout << "numbers of the Fibonacci serie." << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << " param1" << std::endl;
    std::cout << "param1: " << " A number n" << std::endl;
    return false;
  }
  return true;
}

void FibonacciSerie(int number) {
  int first_number{0}, second_number{1}, third_number{0};
  if (number != 0) {
    std::cout << first_number << " " << second_number << " ";
    for (int i = 0; i <= number - 3; i++) {
      third_number = first_number + second_number;
      first_number = second_number;
      second_number = third_number;
      std::cout << third_number << " ";
    }
  } else {
      std::cout << "0";
  } 
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  std::cout << "Everything is fine!. Lets continue with the normal execution..." << argc << std::endl;
  std::cout << std::endl;
  int number = atoi(argv[1]);
  FibonacciSerie(number);
  std::cout << std::endl;
  return 0;
}
