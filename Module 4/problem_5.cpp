#include <iostream>
using namespace std;

int main() {
    // Read the size of the pattern
    int N;
    cin >> N;

    // Loop to generate each line of the pattern
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j && i + j == N - 1) {
                // Middle line with 'X'
                cout << 'X';
            } else if (i == j) {
                // Backslash line
                cout << '\\';
            } else if (i + j == N - 1) {
                // Forward slash line
                cout << '/';
            } else {
                // Space between the slashes
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
