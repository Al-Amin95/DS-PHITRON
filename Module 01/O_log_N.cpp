#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;    // O(1)
    cin >> n; // O(1)

    while (n > 0) // O (log(n))
    {
        int d = n % 10;   // 0(1)
        cout << d << " "; // 0(1)
        n = n / 10;       // 0(1)
    }cout << endl; // 0(1)


    int m;    // O(1)
    cin >> m; // O(1)
    for (int i = 1; i <= m; i = i * 2) // O (log(n))
    {
        cout << i << " "; // O(1)
    }cout << endl; // O(1)


    for (int i = 1; i <= m /2; i++) // O(n)
    {
        cout << i << " "; // O(1)
    }
    cout << endl; // O(1)

    return 0;
    
}