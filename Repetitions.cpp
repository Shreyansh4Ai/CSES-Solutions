#include<bits/stdc++.h>
using namespace std ;

int main(){
    string n ; 
    cin >> n ;

    int Max = 1 ;   // to store the maxlength of reps
    int cnt = 1 ;   // currently ongoing reps 
    for(int i = 1 ; i<n.size();i++){
        if(n[i]==n[i-1]) {      // ensure no out of bound behaviour 
            cnt++;
        }
        else cnt=1;    // resetting the loop 

        Max = max(cnt,Max);   

    }
     
    cout << Max << endl;

}