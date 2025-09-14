
#include <iostream>
#include <unordered_map>
#include <vector>
int main() {
  std::unordered_map<int, bool> map;
  std::vector<int> prize_count(7, 0);
  int num;
  std::cin >> num;
  for (int i = 1; i <= 7; i++) {
    int value;
    std::cin >> value;
    map[value] = true;
  }
  int total = 0;
  for (int i = 1; i <= num; i++) {
    total = 0;
    for (int j = 0; j <= 6; ++j) {
      int a;
      std::cin >> a;
      if (map[a] == true) {
        total++;
      }
    }
    switch (total) {
    case 7:
      prize_count.at(0)++;
      break;
    case 6:
      prize_count.at(1)++;
      break;
    case 5:
      prize_count.at(2)++;
      break;
    case 4:
      prize_count.at(3)++;
      break;
    case 3:
      prize_count.at(4)++;
      break;
    case 2:
      prize_count.at(5)++;
      break;
    case 1:
      prize_count.at(6)++;
      break;
    }
  }

  for (int j = 0; j <= 6; ++j) {
    std::cout << prize_count.at(j) << " ";
  }
}