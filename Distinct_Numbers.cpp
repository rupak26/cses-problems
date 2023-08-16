#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define pb                push_back
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
using ll = long long ;
inline ll vin() {ll x;std::cin >> x;return x;}
using namespace std ;
void solve()
{
     ll n ; cin >> n ;
     vector<ll>a(n) ;
     set<ll>s ;
     for(ll &x : a){
         cin >> x ;
         s.insert(x) ;
     }
     cout << sz(s) << '\n' ;
}
int main() 
{
    int t = 1; 
    while(t--){
        solve() ;
    }
}