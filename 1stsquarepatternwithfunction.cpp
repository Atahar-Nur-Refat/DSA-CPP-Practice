#include<iostream>
using namespace std;
void printsqr(int n) {
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
    {
        cout<<"+";
    }
    cout<<endl;
}

}
int main(){
int n;
cout<<"enter pattern size "<<endl;
cin>>n;
printsqr(n);

    return 0;
}