#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
// const int x= 1e9+7;
 
 
int32_t main(){
    int t; cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
 
        int s=a+b;
 
        
 
        if(s%3!=0 || (a>2*b || b>2*a)){
            cout<<"NO"<<endl;
            continue;
        }
 
 
        cout<<"YES"<<endl;
    }
 
    return 0;
}
