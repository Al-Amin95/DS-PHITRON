#include <bits/stdc++.h>
using namespace std;

void ref_func(int *&num1, int *num2){

    *num1=101;
    num2=NULL;
    cout<<"num1: "<<*num1<<"                num2:"<<num2<<endl;
    cout<<"num1-address: "<<&num1<<"   num2-address: "<<&num1<<endl<<endl;

}
   
int main() {
   
    int a=100, b=200;
    cout<<"a: "<<a<<"                b:"<<b<<endl;
    cout<<"a-address: "<<&a<<"   b-address: "<<&b<<endl<<endl;
    
    int *ptr_a=&a, *ptr_b=&b;
    cout<<"ptr_a: "<<*ptr_a<<"                b:"<<*ptr_b<<endl;
    cout<<"ptr_a-address: "<<&ptr_a<<"   ptr_b-address: "<<&ptr_b<<endl<<endl;

    ref_func(ptr_a, ptr_b);
    return 0;
}
