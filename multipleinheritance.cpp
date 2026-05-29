#include<bits/stdc++.h>
using namespace std;

class Person {
    protected:
    // protected part accessible in the base as well as the derived class
    string name;

    public:
    void introduce () {
        cout << "Hello my name is:" << name << endl;
    }
};

class employee:public Person {

    protected:
    int salary;

    public:
    void monthly_salary() {
        cout << "My monthly salary is:" << salary << endl;
    }
};

class Manager: public employee {

    public:
    string department;

    Manager(string name,int salary, string department) {
        this->name=name;
        this->salary=salary;
        this->department;
    }

    void work() {
        cout << "I am leading the department" << department << endl;
    }
};

int main() {
    Manager A1("Rohit",200,"Finance");
    A1.department="Rohit";
    return 0;
}