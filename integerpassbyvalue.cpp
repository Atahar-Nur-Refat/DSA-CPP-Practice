#include<iostream>
using namespace std;
void  passbyvalue(int num){
cout<<"The value is "<<num<<endl;
num +=5;
cout<<"The value is "<<num<<endl;
num +=5;
cout<<"The value is "<<num<<endl;
num +=5;
cout<<"The value is "<<num<<endl;
num +=5;

}

int main(){
    int x;
    cin>>x;
    passbyvalue(x);
cout<<"The original value is "<<x<<endl;

    return 0;
}