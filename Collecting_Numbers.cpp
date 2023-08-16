#include<bits/stdc++.h>
using namespace std ;
#define all(x)   (x).begin(),(x).end() 
int main()
{
    int n ; cin >> n ;
    vector<pair<int,int>>v ;
    for(int i=0;i<n;i++){
        int x ; cin >> x ;
        v.push_back({x , i+1}) ;
    }
    sort(all(v)) ;
    int cnt = 1;
    for(int i=0;i<n-1;i++){
        if(v[i].second > v[i+1].second){
            ++cnt ;
        }
    }
    cout << cnt << '\n' ;
}