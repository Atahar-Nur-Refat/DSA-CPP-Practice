#include <iostream>
using namespace std;
void pattern8(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        // for space

        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        // for star
        for (j = 0; j < 2 * n - (2 * i +1); j++)
        {
            cout << "*";
        }
        // for space
        for (j = 0; j <i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        pattern8(n);
    }
    return 0;
}