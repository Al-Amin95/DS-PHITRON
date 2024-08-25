#include <bits/stdc++.h>
using namespace std;
int main()
{

    //without space
    // int n;
    // cin >> n;
    // vector<string> v;

    // for (int i = 0; i <n; i++)
    // { 
    //     string s;
    //     cin>>s;
    //     v.push_back(s);
    // }
    // for ( string val: v){
    //     cout<< val<<endl;
    // }

    // vector<string> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }

    // for (string val : v)
    // {
    //     cout << val << endl;
    // }

    //with space
    // int n;
    // cin >> n;
    // cin.ignore();
    // vector<string> x;
    // for (int i = 0; i < n; i++)
    // {
    //     string s;
    //     getline(cin,s);
    //     x.push_back(s);
    // }

    // for (string val : x)
    // {
    //     cout << val << endl;
    // }

    int n;
    cin >> n;
    cin.ignore();
    vector<string> x(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin,x[i]);
    }

    for (string val : x)
    {
        cout << val << endl;
    }

    return 0;
}