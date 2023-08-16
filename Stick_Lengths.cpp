#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n  ; cin >> n ;
    vector<int>a(n) ;
    for(int &x : a){
        cin >> x ;
    }
    sort(a.begin(),a.end()) ;
    int mid = a[n/2] ;

    long long int ans = 0 ;
    for(int i=0;i<n;i++){
        ans += abs(a[i] - mid) ;
    }
    cout << ans << '\n' ;
}