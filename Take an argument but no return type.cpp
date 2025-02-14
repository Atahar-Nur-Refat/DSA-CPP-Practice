#include<bits/stdc++.h>
using namespace std;

// Take an argument but no return type

void isPositive(int val){
    if(val > 0){ // 2>0
        cout<<"Positive"<<endl;
    }
    else{
        cout<<"Negative"<<endl;
    }
}

int main(){
    
    int t;
    cin>>t; // 3
    for(int q=1;q<=t;q++){ // 1,2,3
        int x; cin>>x; // 2
        isPositive(x); // 2
    }
    return 0;
}

/* 
i i i i=4
1 2 3

*/