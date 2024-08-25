#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40};

    vector<int> x = {40, 50, 60, 70};

    v.assign(x.begin(), x.end());

    cout << "Vector Element: ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    v.push_back(400);
    cout << "Vector Element after add element: ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "Vector Element after remove last element: ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> b = {11, 22, 33, 44};

    a.insert(a.begin(), 111);
    a.insert(a.begin() + 2, 222);
    a.insert(a.end() - 1, 333);
    a.insert(a.begin()+4, b.begin(), b.end());
    // a.insert(a.begin(), 111);
    cout << "Vector Element after insert: ";
    for (int x : a)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> d = {12, 21, 13, 31,41,51,61,71,81,91};
 
    cout << "Vector Element before erase: ";
    for( int x:d){ 
        cout<<x<<" ";
    }cout<<endl;
    d.erase(d.begin());
    d.erase(d.begin()+2);
    // d.erase(d.begin()+4, d.end());
    cout << "Vector Element after erase: ";
    for( int x:d){ 
        cout<<x<<" ";
    }cout<<endl;

    vector<int> e = {12, 21, 13, 31,41,51,61,71,81,91};

    replace(e.begin(),e.end(),12,100);
    replace(e.begin()+5,e.end(),51,100);
    cout << "Vector Element after erase: ";
    for (int x:e){
        cout<<x<<" ";
    }cout<<endl;

    vector<int> f = {12, 21, 13, 31,41,51,61,71,81,91};

    auto it= find(f.begin(),f.end(),12);

    if(it !=f.end()){

         cout<<"Found: "<<*it;
    }else{
         cout<<"Not Found: ";

    }





    return 0;
}