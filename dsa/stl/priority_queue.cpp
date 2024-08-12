#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // max heap
    priority_queue<int> maxi;

    maxi.push(332);
    maxi.push(3);
    maxi.push(9);
    maxi.push(944);


    int size = maxi.size();
    for(int i=0;i<size;i++){
        cout<<maxi.top()<<endl;
        maxi.pop();
    }

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    mini.push(332);
    mini.push(3);
    mini.push(9);
    mini.push(944);

    cout<<endl;
    size = mini.size();
    for(int i=0;i<size;i++){
        cout<<mini.top()<<endl;
        mini.pop();
    }
}