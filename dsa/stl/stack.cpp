#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<string> s;
    s.push("Saad");
    s.push("Hussain");
    s.push("Shaikh");


    cout<<"Top Element is "<<s.top()<<endl;
    cout<<"Size is "<<s.size()<<endl;
    s.pop();
    cout<<"Top Element is "<<s.top()<<endl;
    cout<<"Size is "<<s.size()<<endl;
}