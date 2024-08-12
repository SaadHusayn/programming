#include<iostream>
using namespace std;
int main(){
    //bitwise operators
    // int a = 3;
    // int b = 2;
    // cout<<"a & b = " <<(a & b)<<endl;
    // cout<<"a | b = " <<(a | b)<<endl;
    // cout<<"a ^ b = " <<(a ^ b)<<endl;
    // cout<<"~b = " <<~b<<endl;

    // left shift << and right shift >> operator
    // cout<<(17>>2);
    // cout<<(19<<1);
    // cout<<(-3<<1); neg numbers shifting are compiler dependant

    //for loop
    // int a, b;
    // for(a=1, b=2;a>=1, b>=2;a--, b--){
    //     cout<<a<<" "<< b;
    // }

    //sum of n numbers
    int n;
    cin>>n;
    int sum = (n * (n+1))/2;
    cout<<sum;
    sum = 0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
}