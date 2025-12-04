#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;

    ll ans=0,prev,e;

    for(ll i=0;i<n;i++){
        cin>>e;
        if(i>0 && e<prev){
            ans+=prev-e;
            e=prev;
        }
        prev=e;
    }

    cout<<ans<<endl;
}