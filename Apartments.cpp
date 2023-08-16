#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0);
#define pb                push_back
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
using ll = long long ;
using namespace std ;
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
  
void solve()
{
     ll n,m,k;
     cin >> n >> m >> k ;
     vector<ll>a(n),b(m) ;
     for(ll &x : a) {
       cin >> x ; 
     }
     ll ans=0;
     for(ll &x : b) {
       cin >> x ;
     }
     sort(all(a)) ;
     sort(all(b));

     ll i = 0 , j = 0  ;
     while(i<n&&j<m){
        if(a[i] - k> b[j])j++ ;
        else if(a[i] + k < b[j])i++ ;
        else i++ , j++ , ans++ ;
     }
     cout << ans << '\n' ;
}
int main() 
{
    int t = 1; 
    while(t--){
        solve() ;
    }
}