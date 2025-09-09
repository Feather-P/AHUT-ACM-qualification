#include <iostream>
#include <string>
#include <vector>
struct Student {
    std::string name;
    int age;
    int grade;
};

void train(Student& stu) {
    stu.age += 1;
    stu.grade = stu.grade * 1.2;
    if (stu.grade > 600) {
        stu.grade = 600;
    }
}

int main() {
    int total;
    std::cin >> total;
    std::vector<Student> students;
    for (int i = 0; i < total; ++i) {
        std::string name;
        int age;
        int grade;
        std::cin >> name >> age >> grade;
        students.push_back(Student{
            name, 
            age, 
            grade
        });
    }
    for (Student& student : students) {
        train(student);
    }
    for (const Student& student :students) {
        std::cout <<
        student.name << " " <<
        student.age << " " <<
        student.grade << "\n";
    }
}