#include<bits/stdc++.h>
using namespace std;

class customer {
    string name;
    int account_number;
    int balance;
    int *bal;

    public:
    // default constructor
    customer () {
        name="Dhruv";
        account_number=5;
        balance=100;
        cout << "Constructor is" << name << endl;
    }
    // parameterized constructor
    customer (string a, int b) {
        name=a;
        account_number=b;
        balance=10;
        bal=new int;
        cout << "Constructor is" << name << endl;
    }
    // inline constructor
    // inline customer (string a, int b, int c) : name(a), account_number(b), balance(c) {

    // }

    // this pointer used to access the variables already declared in the class earlier and not access the values which we will pass while calling the constructor
    customer (string name, int account_number, int balance) {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        cout << "Constructor is" << name << endl;
    }

    // void display () {
    //     cout << "Hello! Everyone";
    // }
    // customer (customer &b) {
    //     name=b.name;
    //     account_number=b.account_number;
    //     balance=b.balance;
    // }

    // a destructor is called automatically if not created , the main purpose of creating is to delete dynamically allocated resources explicitly
    // destructor first delete the last created constructor
    // ~customer() {
    //     delete bal;
    // }

    ~customer() {
        cout << "Destructor is " << name << endl;
    }
};

int main () {
    customer A1;
    // A1.display();
    // customer A2("Dhruv",1000,2);
    // A2.display();
    // copy the values of constructor A1 into A3
    customer A3(A1);
    // dynamically creating a constructor
    customer *A4= new customer;
    // will delete constructor A4
    delete A4; 
    return 0;
}