#include <bits/stdc++.h>
using namespace std;

int main() {
    // Read the size of the array
    int N;
    cin >> N;

    // Read the array elements
    vector<int> A(N);
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Sort the array
    sort(A.begin(), A.end());

    // Check for consecutive duplicates in the sorted array
    for(int i = 1; i < N; ++i) {
        if(A[i] == A[i - 1]) {
            cout << "YES" ;
            return 0;
        }
    }

    // If no duplicates are found, print NO
    cout << "NO";
    return 0;
}
