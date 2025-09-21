#include <iostream>
#include <map>
#include <string>

void initial_map(std::map<char, int> &map) {
  map.emplace('A', 1);
  map.emplace('B', 2);
  map.emplace('C', 3);
  map.emplace('D', 4);
  map.emplace('E', 5);
  map.emplace('F', 6);
  map.emplace('G', 7);
  map.emplace('H', 8);
  map.emplace('I', 9);
  map.emplace('J', 10);
  map.emplace('K', 11);
  map.emplace('L', 12);
  map.emplace('M', 13);
  map.emplace('N', 14);
  map.emplace('O', 15);
  map.emplace('P', 16);
  map.emplace('Q', 17);
  map.emplace('R', 18);
  map.emplace('S', 19);
  map.emplace('T', 20);
  map.emplace('U', 21);
  map.emplace('V', 22);
  map.emplace('W', 23);
  map.emplace('X', 24);
  map.emplace('Y', 25);
  map.emplace('Z', 26);
}

int main() {
  std::map<char, int> map;
  std::string a;
  std::string b;
  std::cin >> a >> b;
  initial_map(map);
  int ansa = map.at(a.at(0));
  for (int i = 1; i < a.size(); ++i) {
    ansa *= map.at(a.at(i));
  }
  int ansb = map.at(b.at(0));
  for (int i = 1; i < b.size(); ++i) {
    ansb *= map.at(b.at(i));
  }
  if (ansa % 47 == ansb % 47) {
    std::cout << "GO\n"; 
  } else {
    std::cout << "STAY\n";
  }
}