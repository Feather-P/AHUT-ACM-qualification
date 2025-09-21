#include <cctype>
#include <iostream>
#include <string>
#include <unordered_map>
int main() {
    std::string input;
    std::unordered_map<char, int> map;
    std::cin >> input;
    for (int i = 1; i < input.size() - 2; ++i) {
        if (input.at(i) == ':' && input.at(i+1) == '=') {
            char target = input.at(i-1);
            if (std::isalpha(input.at(i+2))) {
                switch (input.at(i+2)) {
                    case 'a':{
                        map[target] = map['a'];
                        break;
                    }
                    case 'b':{
                        map[target] = map['b'];
                        break;
                    }
                    case 'c':{
                        map[target] = map['c'];
                        break;
                    }
                }
            } else {
                map[target] = input.at(i+2) - '0';
            }
        }
    }
    std::cout << map['a'] << " " << map['b'] << " " << map['c'] << '\n';
}