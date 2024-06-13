#include<iostream>
using namespace std;
class Student {
protected:
    string name;
    int rollNo;

public:
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};


class Result : public Student {
private:
    int maths, science, english;

public:
    Result(string n, int r, int m, int s, int e) : Student(n, r) {
        maths = m;
        science = s;
        english = e;
    }

    void displayResult() {
        displayStudentInfo(); 
        cout << "Maths: " << maths << endl;
        cout << "Science: " << science << endl;
        cout << "English: " << english << endl;
        cout << "Total: " << maths + science + english << endl;
        cout << "Average: " << (maths + science + english) / 3.0 << endl;
    }
};


int main() {
    Result student1("janvi", 1, 80, 70, 90);
    student1.displayResult();

    return 0;
}

