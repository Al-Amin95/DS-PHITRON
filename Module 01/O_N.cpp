#include <bits/stdc++.h>
using namespace std;
int main()
{

   int a = 10;                   // O(1)
   int b = 20;                   // O(1)
   int c = a + b;                // O(1)
   cout << "Sum: " << c << endl; // O(1)
   int n;                        // O(1)
   cin >> n;                     // O(1)
   int ar[n];                    // O(1)

   for (int i = 0; i < n; i++)
   {
      cin >> ar[i]; // O(1)
   } // O(N)

   for (int i = 0; i < n; i++)
   {
      cout << ar[i] << " "; // O(1)
   } // O(N)
   cout << endl;

   for (int i = 0; i < n - 1; i++)
   {
      cout << ar[i] << " "; // O(1)
   } // O(N)
   cout << endl; // O(1)


   for (int i = 0; i < n - 5; i++)
   {
      cout << ar[i] << " "; // O(1)
   } // O(N)
   cout << endl; // O(1)


   for (int i = 0; i < n / 2; i++)
   {
      cout << ar[i] << " "; // O(1)
   } // O(N)
   cout << endl;

   for (int i = 0; i < n; i += 2)
   {
      cout << ar[i] << " "; // O(1)
   } // O(N)
   cout << endl; // O(1)

   int s = 0;
   for (int i = 0; i < n; i++)
   {
      s = s + ar[i];    // O(1)
      cout << s << " "; // O(1)
   } // O(N)
   cout << endl<< "Summation: " << s << endl; // O(1)
   cout << endl;                       // O(1)
   

   int m;                             // 0(1) 
   cin >> m;                          // O(1)
   for (int i = 0; i < n / 2; i += 3) // 0(m)
   { 
      cout << i << " "; // 0(1)
   }
   cout << endl; // 0(1)

   return 0;
}