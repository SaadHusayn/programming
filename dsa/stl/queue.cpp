#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string> q;
    cout<<"Empty or not "<<q.empty()<<endl;
    q.push("Saad");
    q.push("Hussain");
    q.push("Shaikh");


    cout<<"Top Element is "<<q.front()<<endl;
    cout<<"Size is "<<q.size()<<endl;
    q.pop();
    cout<<"Top Element is "<<q.front()<<endl;
    cout<<"Size is "<<q.size()<<endl;
}