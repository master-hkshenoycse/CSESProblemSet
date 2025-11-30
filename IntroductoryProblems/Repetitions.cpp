#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin>>s; 

    ll len=1,ans=1;

    for(ll i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            len++;
        }else{
            len=1;
        }
        ans=max(ans,len);
    }

    cout<<ans<<endl;
}