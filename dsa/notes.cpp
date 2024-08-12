#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int hundreds=0, fifties=0, twenties=0, ones=0;
    while(true){
        switch(n!=0){
            case 1:
                hundreds = n/100;
                n-=hundreds*100;
                fifties = n/50;
                n-=fifties*50;
                twenties = n/20;
                n-=twenties*20;
                ones= n;
                n=0;
                break;
            case 0:
                cout<<hundreds<<" "<<fifties<<" "<<twenties<<" "<<ones<<endl;
                exit(0);
        }
    }
    
}