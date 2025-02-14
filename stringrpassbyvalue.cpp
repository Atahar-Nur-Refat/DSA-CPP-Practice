#include<iostream>
using namespace std;
void  passbyvalue(string  s){
s[1]='I';
cout<<"The Changed Name is " <<s<<endl;
}

int main(){
    string x;
    cin>>x;
    passbyvalue(x);
cout<<"the original name is "<<x<<endl;

    return 0;
}