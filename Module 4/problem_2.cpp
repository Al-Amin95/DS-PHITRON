#include <bits/stdc++.h>
using namespace std;

int main() {
    // Read the size of the array
    int N;
    cin >> N;

    // Read the array elements
    vector<long long> A(N);
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Compute the prefix sum array
    vector<long long> prefixSum(N);
    prefixSum[0] = A[0];
    for(int i = 1; i < N; ++i) {
        prefixSum[i] = prefixSum[i - 1] + A[i];
    }

    // Print the prefix sum array in reverse order
    for(int i = N - 1; i >= 0; --i) {
        cout << prefixSum[i] << " ";
    }
    
    return 0;
}
