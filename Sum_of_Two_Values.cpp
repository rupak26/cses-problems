#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n , w ; cin >> n >> w ;
    vector<int>a(n) ;
    map<int,int>mp ;
    for(int i=0;i<n;i++){
        cin >> a[i] ;
        mp[a[i]] = i+1 ;
    }
    for(int i=0;i<n;i++){
        if(mp.find(w - a[i]) != mp.end()) {
            if(mp[w - a[i]]!=i+1){
               cout << i+1 << " " << mp[w - a[i]] << '\n' ;
               return 0 ;
            }
        }
    }
    cout << "IMPOSSIBLE\n" << '\n' ;
    return 0 ;
}