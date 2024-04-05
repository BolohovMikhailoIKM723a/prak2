#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

struct Student {
    string name;
    int age;
    float averageGrade;
};
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int numStudents;
    cout << "введіть кількість студентів: ";
    cin >> numStudents;
    Student* students = new Student[numStudents];
    for (int i = 0; i < numStudents; ++i) {
        cout << "введіть ім'я студента" << i + 1 << ": ";
        cin >> students[i].name;
        cout << "введіть вік студента" << i + 1 << ": ";
        cin >> students[i].age;
        cout << "введіть середній бал" << i + 1 << ": ";
        cin >> students[i].averageGrade;
    }
    cout << "\nінформація о студентах:\n";
    for (int i = 0; i < numStudents; ++i) {
        cout << "студент " << i + 1 << ":\n";
        cout << "ім'я: " << students[i].name << endl;
        cout << "вік: " << students[i].age << endl;
        cout << "середній бал: " << students[i].averageGrade << endl;
        cout << endl;
    }
    delete[] students;
    return 0;
}