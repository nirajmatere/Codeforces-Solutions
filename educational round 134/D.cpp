#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

#define ll long long

void printVector(vector<ll>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            a.push_back(x);
        }
        vector<ll> b;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            b.push_back(x);
        }
        ll sum=0;
        vector<ll> c;
        for(ll i=0;i<n;i++){
            c[i] = (a[i] ^ b[i]);
            sum += c[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}