#include <iostream>
#include <string>
int main() {
  int operation_count;
  std::cin >> operation_count;
  std::string content;
  std::cin >> content;
  for (int i = 0; i < operation_count; ++i) {
    int operate_mode;
    std::cin >> operate_mode;
    switch (operate_mode) {
    case 1: {
        std::string operate_content;
        std::cin >> operate_content;
        content += operate_content;
        std::cout << content << std::endl;
        break;
    }
    case 2: {
        int a, b;
        std::cin >> a >> b;
        std::string tmp;
        for (int i = a; i < a + b; ++i) {
            tmp.push_back(content.at(i));
        }
        content = tmp;
        std::cout << content << std::endl;
        break;
    }
    case 3: {
        int a;
        std::string operate_content;
        std::cin >> a >> operate_content;
        content.insert(a, operate_content);
        std::cout << content << std::endl;
        break;
    }
    case 4: {
        std::string operate_content;
        std::cin >> operate_content;
        int pos = content.find(operate_content);
        if (pos != std::string::npos) {
            std::cout << pos << std::endl;
        } else {
            std::cout << -1 << std::endl;
        }
        break;
    }
    }
  }
}