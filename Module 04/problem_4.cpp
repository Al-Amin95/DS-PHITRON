#include <bits/stdc++.h>
using namespace std;

int main() {
    // Read the size of the array A
    int N;
    cin >> N;

    // Read the array A elements
    vector<int> A(N);
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Read the size of the array B
    int M;
    cin >> M;

    // Read the array B elements
    vector<int> B(M);
    for(int i = 0; i < M; ++i) {
        cin >> B[i];
    }

    // Read the index X
    int X;
    cin >> X;

    // Insert array B into array A at index X
    A.insert(A.begin() + X, B.begin(), B.end());

    // Print the final array A
    for(int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }
  

    return 0;
}
