#include<iostream>
using namespace std;
int sum(int n1 , int n2){
int n3 =n1 + n2;
return n3;
}
int main(){
 int n1 , n2;
 cin>> n1 >> n2;
 int result= sum(n1,n2);
 cout<<"the sum is " << result;


    return 0;
}