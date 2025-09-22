#include<bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int chinese;
    int math;
    int english;
    int total;
};

int main() {
    int n;
    cin >> n;
    
    Student maxStudent;
    maxStudent.total = -1;
    
    for(int i = 0; i < n; i++) {
        Student s;
        cin >> s.name >> s.chinese >> s.math >> s.english;
        s.total = s.chinese + s.math + s.english;
        
        if(s.total > maxStudent.total) {
            maxStudent = s;
        }
    }
    
    cout << maxStudent.name << " " << maxStudent.chinese << " " << maxStudent.math << " " << maxStudent.english << endl;
    
    return 0;
}
