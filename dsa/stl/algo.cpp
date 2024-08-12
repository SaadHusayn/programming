#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 9};

    int key =  1;
    cout<<"Finding "<<key<<" : "<<binary_search(v.begin(), v.end(), 2)<<endl;
}