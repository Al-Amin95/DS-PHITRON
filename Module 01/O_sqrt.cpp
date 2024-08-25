#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;    // O(1)
    cin >> n; // O(1)
    for (int i = 1; i <= n; i++) // O(N)
    {
        //The loop you have provided is not under  O(sqrt(MN))  complexity; it is O(n) complexity. 
        //The reason for this is that the loop runs from 1 to n, checking each number to see if it is a divisor of n
        if (n % i == 0)
        {
            int divisor = n / i; // O(1)
            cout << divisor << " "; // O(1)
        }
    }
    cout << endl<< endl; // O(1)


    int m;                             // O(1)
    cin >> m;                          // O(1)
    cout << sqrt(m) << endl;           // O(1)
    for (int i = 1; i <= sqrt(m); i++) // O(sqrt(M))
    {
        if (m % i == 0)
        {
            cout << i << " "; // O(1)
            if (m/ i != i)
            {
                cout << m / i << endl; // O(1)
            }
        }
    }
    cout << endl; // O(1)

    return 0;
}
