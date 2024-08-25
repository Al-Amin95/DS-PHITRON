#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];

    for (int i = 0; i < n; i++) //O(N)
    {
        cin >> a[i];
    }

    // sort(a, a + n); //O(Nlog N)

    while (q--) //O(q)
    {  //for this, totaL time complexity:  ///O(q log N) ==>  O(N log N)
        int x;
        cin >> x;
        int left_index = 0;
        int right_index = n - 1;
        bool flag = false;
        while (left_index <= right_index) //O(log N)
        { // O(log N)


            // Find mid index
            int mid_index = (left_index + right_index) / 2;

            // Check if mid index == x
            if (a[mid_index] == x)
            {
                flag = true;
                break;
            }


            // Move left
            if (x > a[mid_index])
            {
                left_index = mid_index + 1;
            }


            else
            { // Move right
                right_index = mid_index - 1;
            }
        }

        if (flag == true)
        {
            cout << "found" << endl;
        }
        else
            cout << "not found" << endl;
    }
 //final time complexity:O(N) + O(Nlog N)= O(Nlog N)
    return 0;
}