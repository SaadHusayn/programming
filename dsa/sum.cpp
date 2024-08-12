#include<iostream>
using namespace std;
int sum(int a[], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}

int main(){
    int a[10000];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<sum(a, size);
}