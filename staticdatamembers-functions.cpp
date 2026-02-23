#include<bits/stdc++.h>
using namespace std;

class customer {
    string name;
    int account_number;
    int balance;
    // here total_customer will give an error bcoz it is declared in private
    // static int total_customer;
    public:
    static int total_customer;
    // overall increement will take in the value of total_customer
    customer (string name, int account_number, int balance) {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_customer++;
    }

    // private static variables give error while accessing them so static mmeber functions are used to access them
    static void accessStatic () {

    }
    void display () {
        cout << name << " " << account_number << " " << balance << " " << total_customer << endl; 
    }
};

int customer::total_customer=0;

int main () {
    customer A1("Rohit",1,1000);
    customer A2("Mohit",2,1800);
    A1.display();
    A2.display();
    // directly giving value to the static variable
    customer::total_customer=5;
}