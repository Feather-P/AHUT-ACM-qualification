#include<bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int chinese;
    int math;
    int english;
    int total;
};

bool isMatch(const Student &a, const Student &b) {
    if(abs(a.chinese - b.chinese) > 5) return false;
    if(abs(a.math - b.math) > 5) return false;
    if(abs(a.english - b.english) > 5) return false;
    if(abs(a.total - b.total) > 10) return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    
    vector<Student> students(n);
    
    for(int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].chinese >> students[i].math >> students[i].english;
        students[i].total = students[i].chinese + students[i].math + students[i].english;
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(isMatch(students[i], students[j])) {
                cout << students[i].name << " " << students[j].name << endl;
            }
        }
    }
    
    return 0;
}
