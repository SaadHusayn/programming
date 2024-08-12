#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int, 44> arr = {1, 2, 3,4};
    cout<<arr.empty()<<endl;
    int size = arr.size();
    
    //traversing array
    for(auto i:arr){
        cout<<i<<endl;
    }
    for(int i=0;i<size;i++){
        cout<< arr[i]<<" ";
    }

    //accessing element ar certain index
    cout<<"\nThe element at 2 index is "<<arr.at(2)<<endl;

    //array is empty or not
    cout<<"Array is empty or not : "<<arr.empty()<<endl;
    
    //first and last element of the array
    cout<<"First Element: "<<arr.front()<<endl;
    cout<<"Last Element: "<<arr.back()<<endl;
    
}