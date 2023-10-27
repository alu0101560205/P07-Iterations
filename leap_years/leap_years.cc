/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file leap_years.cc
  * @author Estela Fernández Trujillo alu0101560205@ull.edu.es
  * @date Oct 3 2023
  * @brief The program reads a year and tell if it`s a leap year.
  * @bug There are no known bugs
  */

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "This program tells if the year it´s a leap year" << std::endl <<
  std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "This program should be called" << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << " The year" << std::endl;
    return false;
  }
  return true;
}

void LeapYears(int year) {
  if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0) ) {
    std::cout << "NO" << std::endl;
  }
  else {
    std::cout << "YES" << std::endl;
  }
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  std::cout << "Everything is fine!. Lets continue with the normal execution..."
  << std::endl << std::endl;
  int year = atoi(argv[1]);
  LeapYears(year);
  return 0;
}
