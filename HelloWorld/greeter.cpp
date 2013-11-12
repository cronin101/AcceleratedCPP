#include <iostream>
#include <string>

int main(const int argc, const char** argv) {
  std::cout << "Please enter your primary identification reference: " << std::endl;

  std::string name;
  std::cin >> name;

  std::cout << "Yo yo yo, " << name << "!" << std::endl;
  return 0;
}
