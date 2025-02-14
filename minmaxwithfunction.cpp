#include <iostream>
using namespace std;
int maxx(int x,int y){
if(x>y)
return x;
else return y;
}
int minn(int x,int y){
    if(x<y)
    return x;
    else return y;
    }

int main() {
int x,y;
cin>> x>>y;
int maximum = maxx(x,y);
cout<<"the max is "<<maximum<<endl;
int minimum = minn(x,y);
cout<<"the min is "<<minimum<<endl;



    
  return 0;
}