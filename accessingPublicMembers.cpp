#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    int rollno;
    string grade;
};

int main() {
    Student s1;
    s1.name="Rohit";
    s1.rollno=19;
    s1.grade="A+";
    cout << s1.name << endl;;

    Student s2;
    s2.name="Dhruv";
    s2.rollno=67;
    s2.grade="A++";
    cout << s2.grade << endl;
}