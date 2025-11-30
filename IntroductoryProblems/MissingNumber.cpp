#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;

    ll sum_req = (n*(n+1))/2ll;
    ll e;

    for(ll i=1;i<n;i++){
        cin>>e;
        sum_req -= e;
    }   
    

    cout<<sum_req;
    return 0;
}