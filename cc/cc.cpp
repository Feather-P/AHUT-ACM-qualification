#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string target;
    std::getline(std::cin, target);
    
    for (char &c : target) {
        c = std::tolower(c);
    }
    
    std::string article;
    std::getline(std::cin, article);
    
    int count = 0;
    int first_pos = -1;
    int current_pos = 0;
    
    for (int i = 0; i < article.length(); ) {
        if (article[i] == ' ') {
            i++;
            current_pos++;
            continue;
        }
        
        std::string word;
        int word_start = current_pos;
        while (i < article.length() && article[i] != ' ') {
            word += std::tolower(article[i]);
            i++;
            current_pos++;
        }
        
        if (word == target) {
            count++;
            if (first_pos == -1) {
                first_pos = word_start;
            }
        }
    }
    
    if (count == 0) {
        std::cout << "-1" << std::endl;
    } else {
        std::cout << count << " " << first_pos << std::endl;
    }
    
    return 0;
}
