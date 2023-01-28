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
const ll mxn = 1e6 + 10 ;
vector<ll>fact(mxn) ;
void seive(){
    fact[1] = 1 ;
    for(ll i=2 ; i<=mxn ; i++) fact[i] = i ; 
    for(ll i=4 ; i<=mxn ; i+=2) fact[i] = 2 ;
    for(ll i=3 ; i*i<=mxn ; i++){
        if(fact[i] == i){
            for(ll j = i*i ; j<=mxn ; j+=i){
                if(fact[j] == j){
                    fact[j] = i ;
                }
            }
        }
    }
}
vector<ll>rup(ll x) {
    vector<ll> ret;
    while (x != 1)
    {
        ret.pb(fact[x]);
        x = x / fact[x];
    }
    return ret;
}
void solve()
{
    ll n ; cin >> n ;
    vector<ll>a(n);
    ll p = 0 ;
    for(ll &x : a){
        cin >> x ;
        p=max(p,x);
    } 
    vector<ll>div(p+1,0);
    for(ll i=0 ; i<n ; i++){
       vector<ll>fb = rup(a[i]) ;
    }
    ll ans ;
    for(ll i=p;i>=1;i--){
        if(div[i] > 1){
            ans = i ;
            break;
        }
    }
    cout << ans << '\n' ;
}
int main() 
{
    seive();
    int t = 1; 
    while(t--){
        solve() ;
    }
}