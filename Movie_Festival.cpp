#include<bits/stdc++.h>
using namespace std ;
bool com(pair<int,int>a , pair<int,int>b){
    return a.second < b.second ;
}
int main() 
{
    int n ; cin >> n ;
    vector<pair<int,int>>v ;
    for(int i=0 ; i<n ; i++){
        int x , y ; cin >> x >> y ;
        v.push_back({x , y}) ;
    }
    sort(v.begin() , v.end(),com) ;
    int y = v[0].second , ans = 1 ;
    for(int i=1;i<n;i++){
        if(v[i].first >= y) {
            ans++ ;
            y = v[i].second ;
        }
    }
    cout << ans << '\n' ;
    return 0 ;
}