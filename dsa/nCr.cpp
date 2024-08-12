#include<iostream>
using namespace std;
// int nCr(int n, int r){
//     if(r==0) return 1;
//     if(n==r) return 1;
//     if(r==1) return n;
//     if(r==n-1) return n;
//     return nCr(n-1, r) + nCr(n-1, r-1);
// }
int fac(int n){
    if(n==0 || n==1) return 1;
    return n * fac(n-1);
}
int nCr(int n, int r){
    return (fac(n))/(fac(r) * fac(n-r));
}
int main(){
    int n, r;
    cin>>n>>r;
    cout<<nCr(n, r)<<endl;
}