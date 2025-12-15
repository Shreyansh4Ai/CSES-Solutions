#include<bits/stdc++.h>
using namespace std ;
using ll = long long ;
int main(){
   
    ll n ;
    cin >> n ;
    ll moves = 0 ;
    ll c_max ;
    cin >> c_max ; // 1 st element "0th " index holder 

    for(ll i = 1 ; i<n ; i++){
        ll x ;
        cin >> x ;
        if(x < c_max){
            moves +=(c_max - x) ; // jitta badhaya utne moves 
        }else{
            c_max = x ;         // new previous element 
        }
    }
     cout << moves << endl;
}

//note -> if cmax is  3 hai and x me 2 hai then 2 m increment 1 hoga aur vo 3 bnega toh ab jo dono element h vo ab 3 3 hain
// so now we dont need to move or update the c_max because the previous or the required c_max has been found to be equal 
// we can use the same c_max until we found a case in which x > c_max ......