#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v;
    // // initializing vector with 0
    // vector<int> v1(333, 0);
    // for(int i:v1) cout<<i<<endl;


    // //size-> number of elements
    // //capacity-> number of elements that can be stored
    // //appending vector using push_back

    // v.push_back(20);
    // v.push_back(33);


    // //accessing element by its index using at function
    // cout<<"Element at index 0 is "<<v.at(0)<<endl;

    // //front and back function
    // cout<<"Front Element : "<<v.front()<<endl;
    // cout<<"Back Element : "<<v.back()<<endl;

    // v.push_back(58);

    // //traversing vector
    // for(int i:v){
    //     cout<<i<<endl;
    // }

    // //removing element form last using pop_back function
    // v.pop_back();

    // cout<<"After pop back"<<endl;

    // for(int i:v){
    //     cout<<i<<endl;
    // }

    // // clearing vector i.e removing all elements 
    // v.clear();
    // cout<<"After removing "<<endl;
    // for(int i:v) cout<<i<<endl;

    // //copy all the element in a new array
    // vector<int> last(v1);
    // for(int i:last) cout<<i<<endl;

    vector<int> v(32, 1);
    cout<<v.size()<<endl;
    // v.erase(v.begin(), v.end());
    v.push_back(32);
    // v.clear();
    cout<<v.capacity()<<endl;

}