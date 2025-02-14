#include<bits/stdc++.h>
using namespace std;

// Take an argument and have an return type

float radius(float r){
    float res = 2 * 3.1416 * r;
    return res;
}

int main(){
    float r;
    cin>>r;

    float res = radius(r);
    cout<<res<<endl;

    return 0;
}