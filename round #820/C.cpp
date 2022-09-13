#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

#define ll long long

void printVector(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll sum=0;
        string ss=s;
        sort(all(ss));
        if(ss[0]==ss[sz(s)-1]){
            cout<<"0 "<<sz(s)<<"\n";
            for(ll i=1;i<=sz(s);++i)
                cout<<i<<" ";cout<<"\n";
            return;
        }
        map<char,vector<ll>>mp;
        for(ll i=1;i<sz(s)-1;++i)
            mp[s[i]].pb(i+1);
        if(s[0]<s[sz(s)-1])
        {
            for(char i=s[0];i<=s[sz(s)-1];++i)
                sum+=sz(mp[i]);
            cout<<s[sz(s)-1]-s[0]<<" "<<sum+2<<"\n";
    cout<<"1 ";
    for(char i=s[0];i<=s[sz(s)-1];++i)
    for(auto &j:mp[i])cout<<j<<" ";cout<<sz(s);
    cout<<"\n";
}
else
{
    for(char i=s[0];i>=s[sz(s)-1];--i)
    sum+=sz(mp[i]);
     cout<<s[0]-s[sz(s)-1]<<" "<<sum+2<<"\n";
    cout<<"1 ";
    for(char i=s[0];i>=s[sz(s)-1];--i)
for(auto &j:mp[i])cout<<j<<" ";
    cout<<sz(s)<<"\n";
}
    }
    return 0;
}