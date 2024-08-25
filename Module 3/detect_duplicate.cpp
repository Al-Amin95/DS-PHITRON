#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];

   
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    int x;
    cin >> x;

   
    int l = 0, r = n - 1;
    int first = -1;  

    while (l <= r) {
        int m = l + (r - l) / 2;
        
        if (ar[m] == x) {
            first = m;  // Update first occurrence
            r = m - 1;  // Look for earlier occurrences
        } else if (ar[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    if (first == -1) {
        cout << "false" << endl;
    } else {
        // Check if there is more than one occurrence
        int second = -1;  // Initialize second occurrence
        l = 0, r = n - 1;

        while (l <= r) {
            int m = l + (r - l) / 2;
            
            if (ar[m] == x) {
                second = m;  // Update second occurrence
                l = m + 1;   // Look for later occurrences
            } else if (ar[m] < x) {
                l = m + 1;
            } else {
                r = m - 1;
            } 
        }

        if (second != -1 && second != first) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }

    return 0;
}
