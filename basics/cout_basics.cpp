#include <iomanip>
#include <iostream>

/**
 * main - main function for hello world
 *
 * Return: "Hello World"
 */

int main() {
  int age, num;
  bool flag;
  double pi;
  std::string first_name;

  first_name = "Davey";
  pi = 3.1415926535;
  flag = true;
  age = 38;
  num = 256;

  /* basic usage*/
  std::cout << std::left << std::setfill('*') << std::setw(80) << "Basic Usage"
            << std::endl;
  std::cout << "Hello, World!\n";
  std::cout << 3 << "\n";
  std::cout << 3 + 3 << "\n";
  std::cout << std::endl;

  /* variables */
  std::cout << std::left << std::setfill('*') << std::setw(80) << "Variables"
            << std::endl;
  std::cout << "My name is " << first_name << ", I am " << age
            << " years old!\n";
  std::cout << std::endl;

  /* setw(), std::left, std::right */
  std::cout << std::left << std::setfill('*') << std::setw(80)
            << "setw(), left, right indent" << std::endl;
  std::cout.fill(' '); /* setfill('*') is persistent, this line resets*/
  std::cout << std::setw(5) << "Hello, World!\n";
  std::cout << std::left << std::setw(10) << "Hello"
            << "World" << std::endl;
  std::cout << std::right << std::setw(10) << "Hello"
            << "World" << std::endl;
  std::cout << std::boolalpha << flag << std::endl;
  std::cout << std::endl;

  /* float notations */
  std::cout << std::left << std::setfill('*') << std::setw(80)
            << "float notation" << std::endl;
  std::cout.fill(' '); /* setfill('*') is persistent, this line resets*/
  std::cout << std::left << std::setw(15) << "Fixed:" << std::setw(15)
            << std::fixed << pi << std::endl;

  std::cout << std::left << std::setw(15) << "Scientific:" << std::setw(15)
            << std::scientific << pi << std::endl;

  std::cout << std::left << std::setw(15) << "Precision(3):" << std::setw(15)
            << std::setprecision(3) << pi << std::endl;
  std::cout << std::endl;

  /* int notations */
  std::cout << std::left << std::setfill('*') << std::setw(80) << "int notation"
            << std::endl;
  std::cout << "Octal     : " << std::oct << num << std::endl;
  std::cout << "Hex       : " << std::hex << num << std::endl;
  std::cout << "Decimal   : " << std::dec << num << std::endl;
  std::cout << std::endl;

  /* setfill() */
  std::cout << std::left << std::setfill('*') << std::setw(80) << "setfill()"
            << std::endl;
  std::cout << std::setfill('*') << std::setw(30) << 42 << std::endl;
  std::cout << std::setfill('-') << std::setw(30) << "Hello" << std::endl;
  std::cout << std::endl;

  return (0);
}
