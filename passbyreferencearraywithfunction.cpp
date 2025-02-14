#include <iostream>
using namespace std;

void ARRRR(int arr[], int n) {
    arr[2] += 100;
    cout << "The value in function: " << arr[2] << endl;
}

int main() {
    int n = 5;  
    int arr[5]; 

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ARRRR(arr, n);

    cout << "The value in main is: " << arr[2] << endl;

    return 0;
}
