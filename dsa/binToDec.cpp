#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dec=0;
    int i=0;
    while(n!=0){
        int bit = n%10;
        cout<<bit<<" "<<n<<" "<<i<<endl;
        if(bit){
        dec += pow(2, i);
        }
        i++;
        n/=10;
    }
    cout<<dec<<endl;
}