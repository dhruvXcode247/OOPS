#include <iostream>
using namespace std;

class a {
    char first;
    char second;
    int third;
    // 8 bytes
};

int main() {
    a obj;
    cout << sizeof(obj) << " ";
}