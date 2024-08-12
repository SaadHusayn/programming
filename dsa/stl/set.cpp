#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double


signed main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(9);
    s.insert(100);

    // for(auto i:s) cout<<i<<endl;
    
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<endl;
    }

    set<int>::iterator it = s.find(111);

    

    s.erase(100);

    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<endl;
    }

    

    cout<<s.count(100)<<endl;


}