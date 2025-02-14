#include<iostream>
using namespace std;
int main(){
int arr[5];
cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

arr[4]=200;
cout<<"The Last element is  "<< arr[4];
arr[4]-=100;
cout<<"\n""The Last element is  "<< arr[4];

    return 0;
}