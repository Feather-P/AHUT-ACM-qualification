#include <algorithm>
#include <iostream>
#include <vector>

class NInteger {
public:
  std::pmr::vector<short int> data;
  short int mode;

  NInteger operator+(const NInteger &other) {
    NInteger result;
    result.mode = mode;

    size_t max_size = std::max(data.size(), other.data.size());
    result.data.resize(max_size + 1);

    for (size_t i = 0; i < max_size; i++) {
      short int val1 = (i < data.size()) ? data.at(i) : 0;
      short int val2 = (i < other.data.size()) ? other.data.at(i) : 0;
      result.data.at(i) = val1 + val2;
    } // 位内加法

    for (size_t i = 0; i < result.data.size() - 1; i++) {
      short int carry = result.data.at(i) / mode;
      result.data.at(i + 1) += carry;
      result.data.at(i) = result.data.at(i) % mode;
    }

    // 移除前导零
    while (result.data.size() > 1 && result.data.back() == 0) {
      result.data.pop_back();
    }

    return result;
  }
};

bool is_palindrome(NInteger data) {
  for (int i = 0; i < data.data.size() / 2; ++i) {
    if (data.data.at(i) != data.data.at(data.data.size() - 1 - i)) {
      return false;
    }
  }
  return true;
}

int main() {
  NInteger data;
  short int mode;
  std::cin >> mode;
  data.mode = mode;

  std::string m_str;
  std::cin >> m_str;

  for (int i = m_str.length() - 1; i >= 0; --i) {
    char c = m_str[i];
    short int digit;
    if (c >= '0' && c <= '9') {
      digit = c - '0';
    } else {
      digit = c - 'A' + 10;
    }
    data.data.push_back(digit);
  }

  if (is_palindrome(data)) {
    std::cout << "STEP=0" << std::endl;
    return 0;
  }

  for (int step = 1; step <= 30; ++step) {
    NInteger reversed;
    reversed.mode = mode;
    reversed.data = data.data;
    std::reverse(reversed.data.begin(), reversed.data.end());

    data = data + reversed;

    if (is_palindrome(data)) {
      std::cout << "STEP=" << step << std::endl;
      return 0;
    }
  }

  std::cout << "Impossible!" << std::endl;
  return 0;
}