#include<iostream>
using namespace std;

class Student {
    public :
    string name;
    int age;
    int rollno;
};

int main() {
    Student *s=new Student;
    (*s).name="Rohit";
    s->age=18;
    s->rollno=67;
    cout << (*s).name;
    cout << s->age;
    cout << s->rollno;
}