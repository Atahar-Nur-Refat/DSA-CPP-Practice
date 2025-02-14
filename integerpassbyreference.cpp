#include <iostream>
using namespace std;


void passByReference(int &num) {
    cout << "The value is " << num << endl;
    num += 5;
    cout << "The value is " << num << endl;
    num += 5;
    cout << "The value is " << num << endl;
    num += 5;
    cout << "The value is " << num << endl;
    num += 5;
    cout << "The value is " << num << endl;
}


int main() {
    int x;
    cin >> x;
    passByReference(x); 
    
    cout << "The  final changed value is " << x << endl; 
    return 0;
}
