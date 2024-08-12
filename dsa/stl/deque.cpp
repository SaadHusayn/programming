#include<iostream>
#include<deque>
using namespace std;
 

int main(){
    //deque -> doubly ended queue
    // insertion and deletion from both ends
    // deque<int> d;

    // cout<<"Empty or not : "<<d.empty()<<endl;

    // d.push_back(40);
    // d.push_front(9);

    // //traversing deque
    // for(int i:d) cout<<i<<endl;

    // cout<<"Front : "<<d.front()<<endl;
    // cout<<"back : "<<d.back()<<endl;

    // d.pop_front();
    // cout<<"Front : "<<d.front()<<endl;
    // cout<<"back : "<<d.back()<<endl;
    // cout<<d[0]<<endl;

    // cout<<"Empty or not : "<<d.empty()<<endl;

    // d.push_back(89);

    // for(int i:d) cout<<i<<endl;

    deque<int> d(32, 1);
    cout<<d.size()<<endl;
    d.erase(d.begin(), d.end());
    // d.clear();
    
    cout<<d.size()<<endl;

}