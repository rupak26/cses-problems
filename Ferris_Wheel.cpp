#include<bits/stdc++.h>
using namespace std ;
int main() 
{
    int n , w ; 
    cin >> n >> w ;
    vector<int>a(n) ;
    for(int &x : a){
        cin >> x ;
    }
    sort(a.begin(),a.end()) ;
    vector<int>index(n,0) ;
    int mx_need = n , cnt = 0 ;
    for(int i=0,j=n-1;i<j;){
       if(a[i] + a[j] <= w){
           index[i] = index[j] = 1 ;
           i++ , j-- ;
           cnt++ ;
       }else{
            j-- ;
       }
    }
    for(int i=0 ; i<n ; i++){
        if(index[i] == 0)++cnt ;
    }
    cout << cnt << '\n' ;
}