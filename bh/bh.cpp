#include <iostream>
#include <vector>
class Block {
public:
  int x;
  int y;
  int z;
  std::vector<std::vector<std::vector<bool>>> flags;

  Block(int xx, int yy, int zz)
      : x(xx), y(yy), z(zz),
        flags(x + 1, std::vector<std::vector<bool>>(
                         y + 1, std::vector<bool>(z + 1, true))) {}

  void melt(int x1, int y1, int z1, int x2, int y2, int z2) {
    for (int i = x1; i <= x2; ++i) {
      for (int j = y1; j <= y2; ++j) {
        for (int k = z1; k <= z2; ++k) {
          flags[i][j][k] = false;
        }
      }
    }
  }

  int count() {
    int sum = 0;
    for (int i = 1; i <= x; ++i) {
      for (int j = 1; j <= y; ++j) {
        for (int k = 1; k <= z; ++k) {
          if (flags[i][j][k] == true) {
            ++sum;
          }
        }
      }
    }
    return sum;
  }
};

int main() {
  int x, y, z;
  std::cin >> x >> y >> z;
  Block block(x, y, z);
  int step = 0;
  std::cin >> step;
  for (int i = 1; i <= step; ++i) {
    int x1, y1, z1, x2, y2, z2;
    std::cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    block.melt(x1, y1, z1, x2, y2, z2);
  }
  std::cout << block.count();
}