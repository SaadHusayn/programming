#include<iostream>
using namespace std;
int min(int a[], int n){
    int m = INT_MAX;
    for(int i=0;i<n;i++){
        // if(a[i] < min) min = a[i];
        m = min(m, a[i]);
    }
    return m;
}

int max(int a[], int n){
    int m = INT_MIN;
    for(int i=0;i<n;i++){
        // if(a[i] > max) max = a[i];
        m = max(m, a[i]);
    }
    return m;
}

int main(){
    int a[10000];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<min(a, size)<<endl<<max(a, size)<<endl;
}