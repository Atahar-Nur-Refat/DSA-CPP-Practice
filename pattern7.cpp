#include<iostream>
using namespace std;
void pattern7(int n) {
    for(int i=1;i<=n;i++)
    {
    for(int j=1;j<=n-i;j++)
    {
        cout << " ";
    }    for(int j=1;j<=2*i-1;j++)
    cout << "*";
    cout<<endl;
}

}
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    pattern7(n);
}
    return 0;
}