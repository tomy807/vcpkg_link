#include <fmt/core.h>
#include <iostream>
int main() {
  std::string s = fmt::format("The answer is {}.", 42);
  std::cout << s << std::endl;
  return 0;
}