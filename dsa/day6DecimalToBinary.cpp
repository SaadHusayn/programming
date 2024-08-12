#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=n;
    unsigned int binary=0;
    int i=0;
    while(n!=0){
        int digit  = n&1;
        n/=2;
        binary+=pow(10, i++)*digit;
    }
    cout<<binary;
    // int i=0;
    // while(n!=0){
    //     int digit  = n&1;
    //     n>>=1;
    //     binary+=pow(10, i++)*digit;
    // }
    // cout<<binary;
}