#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Initialize vector x with elements
    vector<int> x = {10, 20, 30, 40, 50};
    vector<int> v = {100, 200, 300, 400, 500};

    // Print elements without using an iterator
    cout << "x-vector Without iterator: ";
    for (size_t i = 0; i < x.size(); i++)
    {
        // cout << x[i] << " "; // Print element using index
        cout << x.at(1) << " ";
    }
    cout << endl;

    // Print elements with using an iterator
    cout << "v-vector With iterator: ";

    for (auto it = v.begin(); it < v.end(); it++)
    {

        cout << *it << " ";
    }  cout << endl;

    cout<<"Front v-vector"<<v.front()<<endl;
    cout<<"Back v-vector"<<v.back()<<endl;
  

    return 0;
}
