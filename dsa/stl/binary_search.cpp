#include<bits/stdc++.h>
using namespace std;

#define io ios::sync_with_stdio(false); cin.tie(0);
#define int long long int
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
    int n;
    cin>>n;

    vi v(n);
    forn(n) cin>>v[i];

    int x;
    cin>>x;

    sort(v.begin(), v.end());

    int indx = lower_bound(v.begin(), v.end(), x) - v.begin();

    if(indx!=n && v[indx] == x) cout<<indx<<endl;
    else cout<<-1<<endl;



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
