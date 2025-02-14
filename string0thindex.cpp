#include<iostream>
using namespace std;
int main(){
string s = "ABCDEFGHIJ";
int len = s.size();
s[len-3]='x';
cout<< s;


    return 0; ;
}
