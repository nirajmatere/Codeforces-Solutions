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
    ll f1=0,l1=0;
    ll pairs = 0;

//Two pointer approach
    // int sz = max(n,m);
    // for(int i=0;i<sz;i++){
    //     if((f1 < n && l1 < m) && a[f1] == b[l1]){
    //         ll f2 = f1,l2 = l1;
    //         while((f2 < n) && a[f1] == a[f2]){
    //             f2++;
    //         }
    //         while((l2 < m) && b[l1] == b[l2]){
    //             l2++;
    //         }
    //         pairs += (f2-f1)*(l2-l1);
    //         l1 = l2;
    //         f1 = f2;
    //     }
    //     else if((f1 < n && l1 < m) && a[f1] < b[l1]){
    //         f1++;
    //     }
    //     else if((f1 < n && l1 < m) && a[f1] > b[l1]){
    //         l1++;
    //     }
    // }

//count freq using map
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(int i=0;i<m;i++){
        // if(a[f1] == b[l1]){
        //     pairs += mp[f1];
        //     l1++;
        // }
        // else if(a[f1] < b[l1]){
        //     f1++;
        // }
        // else if(a[f1] > b[l1]){
        //     l1++;
        // }
         pairs += mp[b[i]];

    }

    cout<<pairs<<endl;

    return 0;
}