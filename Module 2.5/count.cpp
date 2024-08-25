#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input the size of the array

    int ar[n];  // Declare the array with the given size
    
    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    // Print the elements of the array
    for (int i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
    

    // Initialize max_value with the first element of the array
    int max_value = ar[0]; 
    cout << "1'st value: " << max_value << endl;


    // Find the maximum value in the array
    for (int i = 0; i < n; ++i) {
        if (ar[i] > max_value) {
            max_value = ar[i];  // Update max_value if the current element is greater
        }
    }
    cout << "Max value: " << max_value << endl;


    // Initialize the frequency array with zeros
    int freq[max_value + 1] = {0};  
    // int freq[n] = {0};  
    

    // Print initial frequency array (all zeros)
    for (int i = 0; i < n; i++) {
        cout << i << " - " << freq[i] << endl;
    }
    cout << endl << endl;

    // Count the frequency of each element in the array
    for (int i = 0; i < n; i++) {
        int val = ar[i];  // Current element
        freq[val]++;      // Increment the frequency of the current element
        cout << i << " - " << val << " --> " << freq[val] << endl;
    }
    cout << endl << endl;


    // Print the frequency of each element
    for (int i = 0; i <= max_value; i++) {

// way:1
        // if (ar[i] == 0)
        // {
        //     zero++;
        // }
        // if (ar[i] == 1)
        // {
        //     one++;
        // }
        // if (ar[i] == 2)
        // {
        //     two++;
        // }
        // if (ar[i] == 3)
        // {
        //     three++;
        // }
  
// way:2
        // if (ar[i] == 0)
        // {
        //     freq[0]++;
        // }
        // if (ar[i] == 1)
        // {
        //      freq[1]++;
        // }
        // if (ar[i] == 2)
        // {
        //      freq[2]++;
        // }
        // if (ar[i] == 3)
        // {

// way:3
        if (freq[i] > 0) {
            cout << i << " - " << freq[i] << endl;
        }
    }


    // cout << "O - " << zero << endl;
    // cout << "1 - " << one << endl;
    // cout << "2 - " << two << endl;
    // cout << "3 - " << three << endl;

    // cout << "O - " << freq[0] << endl;
    // cout << "1 - " << freq[1] << endl;
    // cout << "2 - " << freq[2] << endl;
    // cout << "3 - " << freq[3] << endl;
    // cout << "4 - " << freq[4] << endl;
    // cout << "5 - " << freq[5] << endl;
    // cout << "6 - " << freq[6] << endl;




    return 0; 
}
