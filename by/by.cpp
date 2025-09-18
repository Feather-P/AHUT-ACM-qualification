#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
bool is_prime(int num) {
  if (num == 2) {
    return true;
  }
  if (num == 1) {
    return false;
  }
  if (num == 0) {
    return false;
  }
  for (int i = 2; i <= std::sqrt(num); i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  std::unordered_map<char, int> map;
  std::string line;
  std::getline(std::cin, line);
  for (char c : line) {
    if (map.find(c) == map.end()) {
      map.emplace(c, 1);
    } else {
      map.at(c)++;
    }
  }

  int max, min;
  bool first = true;
  for (auto i : map) {
    if (first) {
      max = i.second;
      min = i.second;
      first = false;
    } else {
      if (i.second > max) {
        max = i.second;
      }
      if (i.second < min) {
        min = i.second;
      }
    }
  }
  const int DELTA = max - min;

  if (is_prime(DELTA)) {
    std::cout << "Lucky Word\n";
    std::cout << DELTA << '\n';
  } else {
    std::cout << "No Answer\n"
    << "0\n" ;
  }
}