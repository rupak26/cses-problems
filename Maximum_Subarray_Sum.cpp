#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ; cin >> n ;
    vector<int>a(n) ;
    for(int &x : a){
        cin >> x ;
    }
    long long int sum_till_now = 0 , max_sum = INT_MIN ;
    for(int i=0;i<n;i++){
        sum_till_now += a[i] ;
        max_sum = max(max_sum , sum_till_now) ;
        if(sum_till_now < 0){
            sum_till_now = 0 ;
        }
    }
    cout << max_sum << '\n' ;
}