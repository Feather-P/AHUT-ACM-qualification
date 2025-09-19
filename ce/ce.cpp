#include <iostream>
#include <string>
#include <vector>
int main() {
    int length;
    std::cin >> length;
    std::cin.ignore(); //清除缓冲区的换行符
    std::string content;
    std::cin >> content;
    int count = 0;
    std::vector<bool> flags(length, false);
    for (int i = 0; i < content.size() - 1; ++i) {
        if (content[i] == 'V' && content[i+1] == 'K') {
            count++;
            flags[i] = true;
            flags[i+1] = true;
            continue;
        }
    } // 计数所有的VK，并把有效数位flags标注为true

    for (int i = 0; i < content.size() - 1; ++i) {
        char tmp[2];
        tmp[0] = content[i];
        tmp[1] = content[i+1];
        if (tmp[0] == 'V' && tmp[1] == 'V' && !flags[i] && !flags[i+1]) {
            count++;
            break;
        }
        if (tmp[0] == 'K' && tmp[1] == 'K' && !flags[i] && !flags[i+1]) {
            count++;
            break;
        }
    } // 标注可能转换的VV或者KK

    std::cout << count << '\n';
}