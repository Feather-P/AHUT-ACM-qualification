#include <iostream>
#include <vector>
int main() {
  int n, m, k;
  std::cin >> n >> m >> k;
  std::vector<std::vector<bool>> data(n+10, std::vector<bool>(n+10, false));
  int i = 1;// 偏移量=3,设二维数组中的3为表示坐标的1
  for (i = 1; i <= m; ++i) {
    int posx, posy;
    std::cin >> posx >> posy;
    posx += 3;
    posy += 3;
    data[posx][posy] = true;
    data[posx - 1][posy] = true;
    data[posx - 2][posy] = true;
    data[posx + 1][posy] = true;
    data[posx + 2][posy] = true;
    data[posx][posy + 1] = true;
    data[posx][posy + 2] = true;
    data[posx][posy - 1] = true;
    data[posx][posy - 2] = true;
    data[posx+1][posy+1] = true;
    data[posx+1][posy-1] = true;
    data[posx-1][posy+1] = true;
    data[posx-1][posy-1] = true;
  } // 设置火把
  for (; i <= k; ++i) {
    int posx,posy;
    std::cin >> posx >> posy;
    posx += 3;
    posy += 3;
    for (int x = posx - 2; x <= posx + 2; ++x) {
        for (int y = posy - 2; y <= posy + 2; ++y) {
            data[x][y] = true;
        }
    }
  }// 设置萤石

  int sum = 0;
  for (int i = 3; i <= n + 3; i++) {
    for (int j = 3; j <= n + 3; j++) {
        if (data[i][j] == false) {
            sum++;
        }
    }
  }

  for (std::vector<bool> s : data) {
  
  }
  std::cout << sum << "\n";
}