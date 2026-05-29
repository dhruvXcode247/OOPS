#include<bits/stdc++.h>
using namespace std;

class Engineer {

    void money() {
        cout << "Hello Money\n";
    }

    public:
    string specialization;

    Engineer () {
        cout << "Hello engineer\n";
    }

    void work() {
        cout << "I have specialization in" << specialization << endl;
    }
};

class Youtuber {

    public:
    int subscribers;

    Youtuber() {
        cout << "Hello Youtuber\n";
    }

    void contentcreator() {
        cout << "I have a subscriber base of " << subscribers << endl;
    }
};

class CodeTeacher: public Youtuber, public Engineer {

    public:
    string name;

    CodeTeacher() {
        cout << "hello Coder\n";
    }

    CodeTeacher(string name, string specialization, int subscribers) {
        this->name=name;
        this->specialization=specialization;
        this->subscribers=subscribers;
    }

    void showcase() {
        cout << "My name is " << name << endl;
        work();
        contentcreator();
    }
};

int main() {
    CodeTeacher A1;
    return 0;
}