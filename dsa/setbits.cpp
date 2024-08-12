#include<iostream>
using namespace std;
// recursively
// int setBits(int a, int b){
//     if(a==0 && b==0) return 0;
//     return (a&1) + (b&1) + setBits(a>>1, b>>1);
// }

int setBits(int a, int b){
    int sBits=0;
    while(a!=0 && b!=0){
        sBits+= (a&1) + (b&1);
        a>>=1;
        b>>=1;
    }
    return sBits;
}
int main(){
    int a, b;
    cin>>a>>b;
    cout<<setBits(a, b);
}