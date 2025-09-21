#include <iostream>
#include <string>
#include <algorithm>

std::string reverseString(std::string s) {
    std::reverse(s.begin(), s.end());
    
    int start = 0;
    while (start < s.size() - 1 && s[start] == '0') {
        start++;
    }
    
    return s.substr(start);
}

std::string reverseDecimal(std::string s) {
    std::reverse(s.begin(), s.end());
    
    int end = s.size() - 1;
    while (end > 0 && s[end] == '0') {
        end--;
    }
    
    return s.substr(0, end + 1);
}

int main() {
    std::string input;
    std::cin >> input;
    
    if (input.find('.') != std::string::npos) {
        size_t point_pos = input.find('.');
        std::string integer_part = input.substr(0, point_pos);
        std::string decimal_part = input.substr(point_pos + 1);
        
        std::string reversed_integer = reverseString(integer_part);
        
        std::string reversed_decimal = reverseDecimal(decimal_part);
        
        if (reversed_decimal.empty()) {
            reversed_decimal = "0";
        }
        
        std::cout << reversed_integer << '.' << reversed_decimal << '\n';
    }
    else if (input.find('/') != std::string::npos) {
        size_t slash_pos = input.find('/');
        std::string numerator = input.substr(0, slash_pos);
        std::string denominator = input.substr(slash_pos + 1);
        
        std::string reversed_numerator = reverseString(numerator);
        std::string reversed_denominator = reverseString(denominator);
        
        std::cout << reversed_numerator << '/' << reversed_denominator << '\n';
    }
    else if (input.find('%') != std::string::npos) {
        std::string number = input.substr(0, input.size() - 1);
        std::string reversed_number = reverseString(number);
        
        std::cout << reversed_number << "%\n";
    }
    else {
        std::string reversed = reverseString(input);
        std::cout << reversed << "\n";
    }
    
    return 0;
}