#include<iostream>
using namespace std;
void  passbyreference(string  &s){
s[1]='E';
cout<<"The Changed Name is " <<s<<endl;
}

int main(){
    string x;
    cin>>x;
    passbyreference(x);
cout<<"the original name is also "<<x<<endl;

    return 0;
}