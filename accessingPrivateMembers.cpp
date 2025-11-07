#include <iostream>
using namespace std;

class Student {
    string name;
    int rollno;
    string grade;
    public:
    void setname(string x) {
        name=x;
    }
    void setrollno(int x) {
        rollno=x;
    }
    void setgrade(string x) {
        grade=x;
    }
    string getname() {
        return name;
    }
    int getrollno() {
        return rollno;
    }
    string getgrade() {
        return grade;
    }
};

int main() {
    Student s1;
    s1.setname("Rohit");
    s1.setrollno(19);
    s1.setgrade("A+");
    cout << s1.getname() << endl;

    Student s2;
    s2.setname("Dhruv");
    s2.setrollno(67);
    s2.setgrade("A++");
    cout << s2.getgrade() << endl;
}