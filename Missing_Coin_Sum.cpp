#include<bits/stdc++.h>
using namespace std ;
const int mx = 2e5 + 500 ;
long long int dp[mx] ;
int main()
{
    int n ; cin >> n ;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin >> a[i] ;
    }
    sort(a.begin(),a.end());
    dp[0] = 1 ;
    for(int i=1;i<=n;i++){
        if(dp[i-1]<a[i]){
            cout <<dp[i-1]<<'\n';
            return 0 ;
        }
        dp[i] = dp[i-1] + a[i] ;
    }
    cout<<dp[n]<<'\n';
    return 0;
}