#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ; cin >> n ;
    vector<int>a(n) ;
    for(int &x: a){
        cin >> x;
    }
    map<int,int>mp ;
    int mx  = 0 ;
    for(int i=0,j=0;i<n;i++){
        j = max(mp[a[i]] ,j) ;
        mx = max(mx , i - j + 1) ;
        mp[a[i]] = i+1 ;
    }
    cout<<mx<<'\n';
}