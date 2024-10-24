#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int marks[5];

public:
    void inputDetails() {
        cout << "Enter student's name: ";
        cin.ignore();
        getline(cin, name); // Use getline for names with spaces
        cout << "Enter marks for 5 subjects:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    char calculateGrade() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        int average = total / 5;

        if (average >= 90) return 'A';
        else if (average >= 80) return 'B';
        else if (average >= 70) return 'C';
        else if (average >= 60) return 'D';
        else return 'F';
    }

    void displayDetails() {
        cout << "\nStudent's Name: " << name << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student s1;
    s1.inputDetails();
    s1.displayDetails();

    return 0;
}

