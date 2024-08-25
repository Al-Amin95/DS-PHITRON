#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N, Q;
    cin >> N >> Q;

    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // while (Q--)
    // {
    //     int L, R;
    //     cin >> L >> R;
    //     L--;
    //     R--;
    //     int sum = 0;
    //     for (int j = L; j <= R; j++)
    //     {
    //         sum += A[j];
    //     }
    //     cout << sum<<endl;
    // } 

    

    for (int i =Q ; Q>0; Q--) { 
        int L, R;
        cin >> L >> R;
        L--;
        R--;
        int sum = 0;
        for (int j = L; j <= R; j++) {
            sum += A[j];
        }
        cout << sum << endl;
    }

    return 0;
}