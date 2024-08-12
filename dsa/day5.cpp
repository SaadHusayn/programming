#include<iostream>
using namespace std;
 double myPow(double x, int n) {
        if(x==0) return 0;
        if(n==0) return 1;
        if(n<0){
            if(n&1){
            return 1 / ( x * myPow(x *x, n/2)) ;
        }
        else{
           return 1 / (myPow( x *x, n/2));
        }
        }
        
        if(n&1){
            return  x * myPow(x *x, n/2) ;
        }
        else{
           return myPow( x *x, n/2);
        }
    }
int main(){
    cout<<myPow(2, -2);
}