#include<iostream>
using namespace std;
int search(int a[], int n, int key){
    for(int i=0;i<n;i++){
        if(key==a[i]) return 1;
    }
    return 0;
}

int main(){
    int a[8] = {1, 2, 3, 4,5, 6, 7, 8};
    int key;
    cin>>key;
    cout<<search(a, 8, key);
}