#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


class Student {
protected:
    int rollNo;
    string name;

public:
    void getStudentData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayStudentData() const {
        cout << "\n----------------------------------------" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
    }
};


class Exam : public Student {
protected:
    float marks[6];

public:
    void getMarks() {
        cout << "Enter marks for 6 subjects (out of 100):" << endl;
        for (int i = 0; i < 6; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks() const {
        cout << "Marks Scored: ";
        for (int i = 0; i < 6; i++) {
            cout << marks[i] << (i < 5 ? ", " : "\n");
        }
    }
};


class Result : public Exam {
private:
    float totalMarks;
    float percentage;

public:
    void calculateResult() {
        totalMarks = 0;
        for (int i = 0; i < 6; i++) {
            totalMarks += marks[i];
        }
        percentage = (totalMarks / 600.0f) * 100.0f;
    }

    void displayResult() const {
        displayStudentData();
        displayMarks();
        cout << "Total Marks : " << totalMarks << " / 600" << endl;
        cout << "Percentage  : " << fixed << setprecision(2) << percentage << "%" << endl;
        cout << "Result Status: " << (percentage >= 40.0 ? "PASS" : "FAIL") << endl;
        cout << "----------------------------------------" << endl;
    }
};


int main() {
    Result studentResult;

    cout << "=== STUDENT RESULT PROCESSING SYSTEM ===" << endl << endl;

    
    studentResult.getStudentData();
    studentResult.getMarks();

    
    studentResult.calculateResult();

    
    cout << "\n================ RESULT ================";
    studentResult.displayResult();

    return 0;
}