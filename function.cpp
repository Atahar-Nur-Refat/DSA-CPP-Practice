#include<iostream>
using namespace std;
void printname(string name ){
    cout<<"Hello "<<name<<endl;
}
int main(){
    string name,name2,name3,name4;
    cin>> name>>name2>>name3>>name4;

printname(name);
printname(name2);
printname(name3);
printname(name4);
    return 0;
}