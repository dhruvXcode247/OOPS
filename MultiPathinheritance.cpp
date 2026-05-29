#include<bits/stdc++.h>
using namespace std;

class Human {
    public:
    string name;

    void display () {
        cout << "My name is: " << name << endl;
    }
};

class Engineer: public virtual Human {

    public:
    string specialization;

    void work() {
        cout << "I have specialization in" << specialization << endl;
    }
};

class Youtuber: public virtual Human {

    public:
    int subscribers;

    void contentcreator() {
        cout << "I have a subscriber base of " << subscribers << endl;
    }
};

class CodeTeacher: public Youtuber, public Engineer {

    public:
    int salary;

    CodeTeacher(string name, string specialization, int subscribers, int salary) {
        this->name=name;
        this->specialization=specialization;
        this->subscribers=subscribers;
        this->salary=salary;
    }
};

int main() {
    CodeTeacher A1("Rohit","CSE",49000,99);
    A1.display();
    return 0;
}