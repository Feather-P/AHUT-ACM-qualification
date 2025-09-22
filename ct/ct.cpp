#include <iostream>
using namespace std;

struct Student {
  int id;
  int academicScore;
  int qualityScore;
  double comprehensiveScore;

  int getTotalScore() { return academicScore + qualityScore; }

  bool isExcellent() {
    return (getTotalScore() > 140) && (academicScore * 7 + qualityScore * 3 >= 800);
  }
};

int main() {
  int n;
  cin >> n;
  Student students[1000];

  for (int i = 0; i < n; i++) {
    cin >> students[i].id >> students[i].academicScore >> students[i].qualityScore;
    students[i].comprehensiveScore = students[i].academicScore * 0.7 + students[i].qualityScore * 0.3;
  }

  for (int i = 0; i < n; i++) {
    if (students[i].isExcellent()) {
      cout << "Excellent" << endl;
    } else {
      cout << "Not excellent" << endl;
    }
  }

  return 0;
}