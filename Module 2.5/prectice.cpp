#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> s(26);
    for (int i = 0; i <s.size(); i++)
    {
        cin >> s[i];
    }

    vector<int> fr(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i] - 'a';
        fr[c]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fr[i] != 0)
        {
            cout << char(i + 'a') << " : " << fr[i] << endl;
        }
    }

    return 0;
}
