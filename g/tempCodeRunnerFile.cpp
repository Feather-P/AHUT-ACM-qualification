#include <iostream>
#include <vector>
int main() {
  std::vector<char> str;
  char ch;
  while (std::cin.get(ch) && ch != '\n' && !std::cin.eof()) {
    str.push_back(ch);
  }
  for (int i = 0; i < str.size() / 2; ++i) {
    char tmp;
    tmp = str.at(i);
    str.at(i) = str.at(str.size() - i - 1);
    str.at(str.size() - i - 1) = tmp;
  }
  for (char c : str) {
    std::cout << c;
  }
  std::cout << std::endl;
}