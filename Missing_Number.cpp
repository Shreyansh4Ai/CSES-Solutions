#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;

int main(){
    ll n ; 
    cin >> n ;
    vector<ll> a(n+1);
   
    ll total = n*(n+1) / 2  ;        // sum of n natural numbers 
    ll sum = 0;  
    for(ll i = 0 ; i<n-1; i++){
        ll x ;
        cin >> x ;                 // adding each number one by one 
        sum+=x ;



    }

    ll ans = total - sum ;     // the final missing number tada...
    cout << ans << endl;

    
    


}