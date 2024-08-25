#include <bits/stdc++.h>
using namespace std;
int main()
{
    //Element access
    vector <int> v={10,20,30,40,50};
    cout<<v.size()<<endl; // O(1)
    // cout<<v[v.size()-3]<<endl;  // O(1)
    cout<<v.back()<<endl; // O(1)

    // cout<<v[0]<<endl; // O(1)
    cout<<v.front()<<endl; // O(1)

    // Iterators
    int sum = 0;
    int count = 0;
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
        sum += *it;
        count++;
    }
    cout << endl;
    cout << "Sum: " << sum << endl;
    cout << "Number of iterations: " << count << endl;
    


   
    return 0;
}