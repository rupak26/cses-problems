#include<bits/stdc++.h>
using namespace std ;
int main() 
{
    int n , m ; cin >> n >> m ;
    vector<int>a(n) , b(m) ;
    multiset<int,greater<int>>s ;
    for(int &x : a){
        cin >> x ;
        s.insert(x) ;
    }
    for(int &x : b){
        cin >> x ;
        // first element 
        auto it = s.lower_bound(x) ;
        if(it==s.end()){
            cout<<-1<<'\n';
        }else{
            cout<<*it<<'\n';
            s.erase(it);
        }
    }
    
}