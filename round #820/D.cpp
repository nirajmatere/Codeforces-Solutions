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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> x,y;
        vector<ll> flag (n,0);
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            x.push_back(a);
        }
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            y.push_back(a);
        }

        int pairs = 0;
        for(int i=0;i<n;i++){
            if(flag[i] == 1){
                // cout<<"cont"<<endl;
                continue;
            }
            ll d = y[i] - x[i];
            for(int j = i+1;j<n;j++){
                ll c = (y[j] - x[j]);
                if(flag[j] == 0 && (c + d >= 0)){
                    int k = j;
                    for(k=j+1;k<n;k++){
                        ll q = (y[k] - x[k]);
                        if((flag[k] == 0 && (q + d >= 0)) && q < c){
                            j = k;
                            // cout<<"here"<<endl;
                            break;
                        }
                    }
                    flag[i] = 1;
                    flag[j] = 1;
                    pairs++;
                    break;
                }
            }
            // cout<<"flag : ";
            // printVector(flag);
        }
        // cout<<"flag : ";
        // printVector(flag);
        cout<<pairs<<endl;
    }
    return 0;
}