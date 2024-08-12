#include<iostream>
using namespace std;
void printa(int a[], int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void swapAlt(int a[], int n){
    for(int i=0;i<n-1;i+=2){
        swap(a[i], a[i+1]);
    }
}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    swapAlt(a, n);
    printa(a, n);
}