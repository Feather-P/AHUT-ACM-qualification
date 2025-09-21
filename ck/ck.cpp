#include <cctype>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
  std::string input;
  std::string line;
  
  for (int i = 0; i < 4; i++) {
    std::getline(std::cin, line);
    input += line;
  }

  std::unordered_map<char, int> map;
  for (char ch : input) {
    if (std::isupper(ch)) {
      map[ch] += 1;
    }
  }
  
  int max = 0;
  for (auto a : map) {
    if (a.second > max) {
        max = a.second;
    }
  }

  std::vector<char> letters;
  for (char c = 'A'; c <= 'Z'; c++) {
    letters.push_back(c);
  }

  for (int height = max; height > 0; height--) {
    for (int i = 0; i < letters.size(); i++) {
      char c = letters[i];
      if (map.count(c) && map[c] >= height) {
        std::cout << "*";
      } else {
        std::cout << " ";
      }
      
      if (i < letters.size() - 1) {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
  for (int i = 0; i < letters.size(); i++) {
    std::cout << letters[i];
    if (i < letters.size() - 1) {
      std::cout << " ";
    }
  }
  std::cout << std::endl;
}