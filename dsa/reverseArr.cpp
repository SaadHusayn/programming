#include<iostream>
using namespace std;
void printa(int a[], int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
// void rev(int a[], int size){
//     int start = 0, end = size - 1;
//     while(start<end){
//         swap(a[start++], a[end--]);
//     }
// }

void rev(int a[], int size){
    for(int i=0;i<size/2;i++){
        swap(a[i], a[size-1-i]);
    }
}

int main(){
    int a[5] = {1,2 ,3 ,4, 5};

    printa(a, 5);
    rev(a, 5);
    printa(a, 5);
}