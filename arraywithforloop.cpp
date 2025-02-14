#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "The number of elements = "; 
    cin >> n;  
    
    int arr[n];  
    cout << "Enter " << n << " elements: "<<endl; 


    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }


    for (int i = 0; i < n; i++) {
        cout << "When the value of 'i' is " << i << endl;
        cout << "Then the array element is = " << arr[i] << endl;
    }

    return 0;
}
