#include<bits/stdc++.h>
using namespace std;

#define io ios::sync_with_stdio(false); cin.tie(0);
// #define int long long int
#define ld long double
#define vi vector<int>
#define pii pair<int, int>
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define all(v) v.begin(), v.end()
#define forn(n) for(int i=0;i<n;i++)
#define yesno(b) cout << ((b)? "YES" : "NO")
#define nl cout << "\n"
#define print(v, a) for(auto _ : v) cout<< _ << a;
#define MOD 99824435311
#define MOD2 100000000711

void solve(){
    map<int, int> m;

    m[1] = 0;
    m[2] = 1;
    m[-99] = 1;
    m[9999] = 1;

    if(m.find(323) =f= m.end()){
        cout<<"not found"<<endl;
    }
    m[323]=33;
    


}

signed main(){
    io;


    int t = 1;
    // cin>>t;

    while(t--){
        solve();
        nl;
    }

    return 0;
}
