#include <iostream>
using namespace std;
void pattern7(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        // for space

        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // for star
        for (j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // for space
        for (j = 0; j < n - i - 1; j++)
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
        pattern7(n);
    }
    return 0;
}