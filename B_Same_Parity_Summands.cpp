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
     ll sum , k ; cin >> sum >> k ;
     if(k > sum){
        cout << "NO\n" ;
        return ;
     }
     ll x = sum / k ;
     if(x * k > sum){
        cout << "NO\n" ;
        return ;
     }
     cout<<"YES\n" ;
     if(sum%k==0){
        ll p = sum/k ;
        for(ll i=0;i<k;i++)cout<<p<<" ";
        cout<<'\n';
     }else{
        if(sum%2==1 && k%2==0){
             ll x =  k - 1 ;
             int p = (sum - 1) / k ;
        }else if(sum%2==0 && k%2 == 1){
             ll p = sum / (k-1) ;
             for(int i=0;i<p-1;i++) cout << p << " " ;
             cout << p+1 << '\n' ;
        }else {
             ll 
        }
     }
}
int main() 
{
    int t ; cin >> t ;
    while(t--){
        solve() ;
    }
}