#include <iostream>
#include <vector>
#include <string>

// 定义每个数字的点阵模式 (3x5)
const std::vector<std::vector<std::vector<bool>>> digitPatterns = {
    // 数字0
    {{true, true, true},
     {true, false, true},
     {true, false, true},
     {true, false, true},
     {true, true, true}},
    // 数字1
    {{false, false, true},
     {false, false, true},
     {false, false, true},
     {false, false, true},
     {false, false, true}},
    // 数字2
    {{true, true, true},
     {false, false, true},
     {true, true, true},
     {true, false, false},
     {true, true, true}},
    // 数字3
    {{true, true, true},
     {false, false, true},
     {true, true, true},
     {false, false, true},
     {true, true, true}},
    // 数字4
    {{true, false, true},
     {true, false, true},
     {true, true, true},
     {false, false, true},
     {false, false, true}},
    // 数字5
    {{true, true, true},
     {true, false, false},
     {true, true, true},
     {false, false, true},
     {true, true, true}},
    // 数字6
    {{true, true, true},
     {true, false, false},
     {true, true, true},
     {true, false, true},
     {true, true, true}},
    // 数字7
    {{true, true, true},
     {false, false, true},
     {false, false, true},
     {false, false, true},
     {false, false, true}},
    // 数字8
    {{true, true, true},
     {true, false, true},
     {true, true, true},
     {true, false, true},
     {true, true, true}},
    // 数字9
    {{true, true, true},
     {true, false, true},
     {true, true, true},
     {false, false, true},
     {true, true, true}}
};

class Screen {
public:
  std::vector<std::vector<bool>> screen;

  Screen(int digit) {
    screen.resize(digit * 3 + digit - 1);
    for (int i = 0; i < digit * 3 + digit - 1; i++) {
      screen[i].resize(5);
    }
    for (int i = 0; i < digit * 3 + digit - 1; i++) {
      for (int j = 0; j < 5; j++) {
        screen[i][j] = false;
      }
    }
  }
  
  void drawDigit(int digit, int offset) {
    for (int row = 0; row < 5; row++) {
      for (int col = 0; col < 3; col++) {
        screen[offset + col][row] = digitPatterns[digit][row][col];
      }
    }
  }
  
  void print() {
    for (int row = 0; row < 5; row++) {
      for (int col = 0; col < screen.size(); col++) {
        std::cout << (screen[col][row] ? 'X' : '.');
      }
      std::cout << std::endl;
    }
  }
};

int main() {
  int digit;
  std::cin >> digit;
  std::string numberStr;
  std::cin >> numberStr;
  
  Screen screen(digit);
  int offset = 0;

  for (int i = 0; i < digit; i++) {
    int num = numberStr[i] - '0';
    screen.drawDigit(num, offset);
    offset += 4;
  }
  
  screen.print();
}