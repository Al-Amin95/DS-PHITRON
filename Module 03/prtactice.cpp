#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    while (q--) {
        int x;
        cin >> x;
        int left_index = 0;
        int right_index = n - 1;
        bool flag = false;

        while (left_index <= right_index) {
            int mid_index = (left_index + right_index) / 2;

            if (a[mid_index] == x) {
                flag = true;
                break;
            }

            if (x > a[mid_index]) {
                left_index = mid_index + 1;
            } else {
                right_index = mid_index - 1;
            }
        }

        if (flag) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }

    return 0;
}
