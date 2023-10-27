/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file bianry_ti_decimal.cc
  * @author Estela Fernández Trujillo alu0101560205@ull.edu.es
  * @date Oct 3 2023
  * @brief This program converts binary numbers into decimal numbers
  * @bug There are no known bugs
  */

#include <iostream>
#include <cmath>

void PrintProgramPurpose() {
  std::cout << "This program reads a binary number and prints the decimal" <<
  std::endl << std::endl; 
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << " A binary number" << std::endl;
    return false;
  }
  return true;
}

int BinaryToDecimal(int number) {
  int resto{0}, total{0}, counter{0};
  while (number != 0) {
    resto = number % 10;
    if (resto == 1) {
      number /= 10;
      total += pow(2, counter);
      counter++;
    } else if (resto == 0) {
        number /= 10;
        counter++;
    } else {
        std::cout << "Wrong Input" << std::endl;
        return 1;
    }
  }
  return total;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  std::cout << "Everything is fine!. Lets continue with the normal execution..."
  << std::endl << std::endl;
  // std::cout << "The decimal number is: ";
  int binary = atoi(argv[1]);
  std::cout << BinaryToDecimal(binary) << std::endl;
  return 0;
}
