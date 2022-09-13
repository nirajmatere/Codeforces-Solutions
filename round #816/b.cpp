#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        int p = s;
        ll upper = ((b+1)*k - 1) + (n-1)*(k-1);
        ll lower = b*k;
        if(s < lower || s > upper){
            cout<<-1<<endl;
            continue;
        }



        if(s < ((b+1)*k) && s >= (b*k)){
            cout<<s<<" ";
            for(ll i=1;i<n;i++){
                cout<<0<<" ";
            }
            cout<<endl;
            continue;
        }
        ll printed = 0;
        while(s >= ((b+1)*k)){
            cout<<k-1<<" ";
            printed++;
            s = s - k + 1;
        }
        cout<<s<<" ";
        printed++;
        for(printed;printed<n;printed++){
            cout<<0<<" ";
        }
        cout<<endl;
        /*
        s =p;
        cout<<((b+1)*k - 1)<<" ";
        ll count = 1;
        ll req = s-((b+1)*k - 1);
        while(req >= 0){
            if(req-(n-1) <= 0){
                cout<<req<<" ";
                count++;
                if(count<n){
                    for(ll i=count;i<n;i++){
                        cout<<0<<" ";
                    }
                }
                break;
            }
            cout<<k-1<<" ";
            count++;
            req = req-k+1;
            
        }
        cout<<endl;
        */
    }
    return 0;
}