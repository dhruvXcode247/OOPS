#include<bits/stdc++.h>
using namespace std;

class human {
    // private part only accessible in the base class
    string religion, color;
    protected:
    // protected part accessible in the base as well as the derived class
    string name;
    int age,weight;

};

// class student:protected human {
class student:private human {
    private:
    int roll_no,fees;

    public:
    void fun(string n, int a, int w) {
        name=n;
        age=a;
        weight=w;
    }

    student(string name,int age, int weight, int roll_number) {
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_no=roll_no;
    }

    void display() {
        cout << name << " " << age << " " << weight << " " ;
    }
};

int main() {
    student A;
    A.fun("Dhruv",10,50);
    A.display();
    return 0;
}