#include<iostream>
using namespace std;
void print(int a[], int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[100];
    for(int i=0;i<100;i++){
        a[i] = 1;
    }
    print(a, sizeof(a)/sizeof(a[0]));
}