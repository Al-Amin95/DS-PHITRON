#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector initailize
    vector<int> v1; // type -1, Construct a vector with 0 elements.
    cout << v1.size() << endl;

    // type -2, Construct a vector with N elements and the value will be garbage.
    vector<int> v2(5); 
    cout << v2.size() << endl;

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    // type -3, Construct a vector with N elements and the value will be V.
    vector<int> v3(5, 10); 
    cout << v2.size() << endl;
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    // type -4,vector<type>v(v2);Construct a vector by copying another vector v2.
    vector<int> v4(v3); 
    cout << v4.size() << endl;
    for (int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
    } cout << endl;

    // type -5,Construct a vector by copying all elements from an array A of size N.
    int n; 
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    vector<int> v5(a, a + n); 

    cout << v5.size() << endl;
    for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
    } cout << endl<< v5.size() ;



    cout << endl<<endl;
    vector<int> v6={100,200,300,400}; 
    for (int i = 0; i < v6.size(); i++)
    {
       cout << v6[i] << " ";
    } cout << endl<< v6.size() ;

    return 0;
}