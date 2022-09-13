#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

#define ll long long

int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> a,b;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    for(ll i=0;i<m;i++){
        ll x;
        cin>>x;
        b.push_back(x);
    }
    ll f=0,s=0;
    ll size = min(n,m);
    while(f < n && s < m){
        if(a[f] <= b[s]){
            cout<<a[f++]<<" ";
        }
        else{
            cout<<b[s++]<<" ";
        }
    }
    if(f >= n){
        while(s < m){
            cout<<b[s++]<<" ";
        }
    }
    else{
        while(f < n){
            cout<<a[f++]<<" ";
        }
    }
    return 0;
}