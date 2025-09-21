#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <sstream>

using namespace std;

map<string, int> wordToNum = {
    {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5},
    {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}, {"ten", 10},
    {"eleven", 11}, {"twelve", 12}, {"thirteen", 13}, {"fourteen", 14},
    {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17}, {"eighteen", 18},
    {"nineteen", 19}, {"twenty", 20},
    {"a", 1}, {"both", 2}, {"another", 11}, {"first", 1}, {"second", 2}, {"third", 3}
};

int getTwoDigitNumber(int num) {
    int square = num * num;
    return square % 100;
}

long long findMinPassword(vector<int>& digits) {
    if (digits.empty()) return 0;
    
    sort(digits.begin(), digits.end());
    
    long long minNum = 999999999999LL;
    do {
        string numStr = "";
        for (int d : digits) {
            if (d < 10) {
                numStr += "0";
            }
            numStr += to_string(d);
        }
        while (numStr.size() > 1 && numStr[0] == '0') {
            numStr.erase(0, 1);
        }
        if (numStr.empty()) {
            numStr = "0";
        }
        try {
            long long currentNum = stoll(numStr);
            if (currentNum < minNum) {
                minNum = currentNum;
            }
        } catch (...) {
            // 如果转换失败，跳过这个排列
            continue;
        }
    } while (next_permutation(digits.begin(), digits.end()));
    
    return minNum;
}

int main() {
    string sentence;
    getline(cin, sentence);
    
    vector<int> numbers;
    stringstream ss(sentence);
    string word;
    
    while (ss >> word) {
        if (!word.empty() && (word.back() == '.' || word.back() == ',')) {
            word.pop_back();
        }
        
        if (wordToNum.find(word) != wordToNum.end()) {
            int num = wordToNum[word];
            int twoDigit = getTwoDigitNumber(num);
            numbers.push_back(twoDigit);
        }
    }
    
    long long password = findMinPassword(numbers);
    cout << password << endl;
    
    return 0;
}