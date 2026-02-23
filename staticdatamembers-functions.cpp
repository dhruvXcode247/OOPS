#include<bits/stdc++.h>
using namespace std;

class customer {
    string name;
    int account_number;
    int balance;
    // here total_customer will give an error bcoz it is declared in private
    static int total_customer;
    static int total_balance;
    public:
    // static int total_customer;
    // overall increement will take in the value of total_customer
    customer (string name, int account_number, int balance) {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_customer++;
        total_balance+=balance;
    }

    // private static variables give error while accessing them so static mmeber functions are used to access them
    // normal functions in this class cannot be used in main to access or update the static variable
    static void accessStatic () {
        cout << "Total no. of customers: " << total_customer << endl;
        cout << "Total balance: " << total_balance << endl;
    }

    void deposit(int amount) {
        if (amount>0) {
            balance+=amount;
            total_balance+=amount;
        }
    }

    void withdraw(int amount) {
        if (amount<=balance && amount>0) {
            balance-=amount;
            total_balance-=amount;
        }
    }



    void display () {
        cout << name << " " << account_number << " " << balance << " " << total_customer << endl; 
    }
};

int customer::total_customer=0;
int customer::total_balance=0;

int main () {
    customer A1("Rohit",1,1000);
    customer A2("Mohit",2,1800);
    A1.display();
    A2.display();
    // directly giving value to the static variable bcoz it is defined in public
    // customer::total_customer=5;
    // customer::accessStatic();
    A1.deposit(800);
    A2.withdraw(500);
    customer::accessStatic();
    return 0;
}