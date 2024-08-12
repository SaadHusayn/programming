#include<iostream>
using namespace std;
// recursively
// int fib(int n){
//     if(n==1) return 0;
//     if(n==2) return 1;
//     return fib(n-1) + fib(n-2);
// }

int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    int a = 0, b=1;
    int f;
    for(int i=2;i<n;i++){
        f =  a+b;
        a=b;
        b= f;
    }
    return f;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
}