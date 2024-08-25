#include <bits/stdc++.h>
using namespace std;

int main() {
    // Read the number of test cases
    int T;
    cin >> T;

    while(T--) {
        // Read the size of the array
        int N;
        cin >> N;

        // Read the array elements
        vector<int> A(N);
        for(int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        // Check if the array is sorted
        bool isSorted = true;
        for(int i = 1; i < N; ++i) {
            if(A[i] < A[i - 1]) {
                isSorted = false;
                break;
            }
        }

        // Print the result
        if(isSorted) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }

    return 0;
}
