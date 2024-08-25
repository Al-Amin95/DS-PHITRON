#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Size:" << v.size() << endl;          // Returns the size of the vector.
    cout << "Max-Size: " << v.max_size() << endl; // Returns the maximum size that the vector can hold
    cout << "Capacity: " << v.capacity() << endl; // Returns the current available capacity of the vector

    cout << "Vecter Element:";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // add elemnet on vector with push_back(), vector size will be increase with linearly (double) : 1 2 4 8 16 -----n
    // step:1
    v.push_back(10);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Vecter Element:";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // step:2
    v.push_back(20);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Vecter Element:";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // step:2
    v.push_back(30);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Vecter Element:";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // step:3
    v.push_back(40);
    cout << "Size:" << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Vecter Element:";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // step:4
    v.push_back(50);
    cout << endl << "Size:" << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    cout << "Vecter Element:";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // step:5---> // add vector element from an array
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    cout << endl<< "Size:" << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    cout << "Vecter Element:";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.clear(); // Clears the vector elements. Do not delete the memory, only clear the value.
    cout << "Vecter Element After Clear Tthe Value:";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << endl<< "Size:" << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    cout << "Memory does not delete the vale:" << v[0] << " " << v[1] << " " << v[2] << " " << v[3] << " " << v[4] << " " << v[5] << " " << v[6] << " " << v[7] << " " << v[8] << " " << v[9] << endl;
    cout << endl<< "Size:" << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // cout<<v.empty()<<endl; //Return true/false if the vector is empty or not.
    if (v.empty() == true)
    {
        cout << endl
             << "Empty" << endl;
    }
    else
    {
        cout << endl
             << "Not Empty" << endl;
    }
    cout << endl;
    // Change the size of the vector.
    v.resize(2);
    cout << "Vecter Element After resize the vector size:";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl<< "Size:" << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << endl;
    v.resize(10, 25);
    cout << "Vecter Element After resize the vector size:";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl<< "Size:" << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << endl;

    // Remove the last element
    if (!v.empty())
    {
        v.pop_back();
    }
    cout << "Elements in the vector after pop_back: ";
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    return 0;
}