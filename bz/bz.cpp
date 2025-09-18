#include <cctype>
#include <iostream>
#include <string>
enum Status { plus, minus, times };

int main() {
  int step;
  std::cin >> step;
  Status mode;
  for (int i = 0; i < step; ++i) {
    std::string tmp;
    std::cin >> tmp;
    int first, second;
    for (char &c : tmp) {
      if (std::isalpha(c)) {
        if (c == 'a') {
          mode = plus;
          std::cin >> first >> second;
          break;
        }
        if (c == 'b') {
          mode = minus;
          std::cin >> first >> second;
          break;
        }
        if (c == 'c') {
          mode = times;
          std::cin >> first >> second;
          break;
        }
      } else {
        first = std::stoi(tmp);
        std::cin >> second;
        break;
      }
    }
    
    int result;
    std::string op;
    switch (mode) {
      case plus:
        result = first + second;
        op = "+";
        break;
      case minus:
        result = first - second;
        op = "-";
        break;
      case times:
        result = first * second;
        op = "*";
        break;
    }
    
    std::string equation = std::to_string(first) + op + std::to_string(second) + "=" + std::to_string(result);
    
    std::cout << equation << std::endl;
    std::cout << equation.length() << std::endl;
  }
  
  return 0;
}