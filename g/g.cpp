#include <iostream>
#include <string>
#include <algorithm>
int main() {
  std::string input;
  std::getline(std::cin, input);
  
  // 调试输出
  // std::cerr << "输入长度: " << input.length() << std::endl;
  // std::cerr << "输入内容: '" << input << "'" << std::endl;
  
  // 检查输入格式
  size_t dot_pos = input.find('.');
  if (dot_pos == std::string::npos) {
    // 没有小数点，直接反转整个字符串
    std::reverse(input.begin(), input.end());
  } else {
    // 有小数点，分别反转整数部分和小数部分
    std::string int_part = input.substr(0, dot_pos);
    std::string dec_part = input.substr(dot_pos + 1);
    
    std::reverse(int_part.begin(), int_part.end());
    std::reverse(dec_part.begin(), dec_part.end());
    
    input = dec_part + "." + int_part;
  }
  
  std::cout << input << std::endl;
  return 0;
}