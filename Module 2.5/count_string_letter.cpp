#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[26];     // Define the character array to hold the string
    cin >> s;       // Input the string

    int fr[26] = {0};  // Initialize frequency array for each letter of the alphabet

    // Count the frequency of each character in the string
    for (int i = 0; i < strlen(s); i++) {
        int val = s[i] - 'a';
        fr[val]++;
    }

// Print the frequency of each character
    // for (int i = 0; i <  26; i++) {
    //     cout << char(i + 'a') << " : " << fr[i] << endl;
    // }cout<<endl;

//maintain alphabetic serial
    for (int i = 0; i < 26; i++) {
       if (fr[i] !=0) {
            cout << char(i + 'a') << " : " << fr[i] << endl;
        }
    } cout<<endl;



//maintain string serial
    // for (int i = 0; i < strlen(s); i++) {
    //     int val=s[i]-'a';
    //    if (fr[val] !=0) {
    //         cout << char(val + 'a') << " : " << fr[val] << endl;
    //     }
    //     fr[val]=0;
    // }


    return 0;
}
