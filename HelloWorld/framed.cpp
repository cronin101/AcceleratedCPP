#include <iostream>
#include <string>

int main(const int argc, const char** argv) {
  std::cout << "Please enter you first name in order to be suitably saluted: " << std::endl;

  std::string name;
  std::cin >> name;

  const std::string hello = "Hello";
  const std::string test_message = hello + " world" + "!";
  const std::string greeting = "Why hello there " + name + "!";

  const std::string spaces(greeting.size(), ' ');
  const std::string padline = "# " + spaces + " #";
  const std::string solidline(padline.size(), '#');

  std::cout << std::endl << solidline << std::endl << padline << std::endl;
  std::cout << "# " + greeting + " #" << std::endl << padline << std::endl << solidline << std::endl;

  return 0;
}
