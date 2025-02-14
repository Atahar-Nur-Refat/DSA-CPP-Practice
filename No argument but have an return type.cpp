#include<bits/stdc++.h>
using namespace std;
/*
    Return_type function_name (argument){
        return
    }
*/
// 2. No argument but have an return type

int sum(int a,int b){

    int tot = a + b;
    return tot;
}

int main(){
    int x,y;
    cin>>x>>y;
    int res =  sum(x,y);
    cout<<"The sum is "<< res<<endl;
    return 0;
}
