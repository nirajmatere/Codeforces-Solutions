#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        while(n--){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int Ipoints = 0;
        // if(v[0]<v[1] && v[1]>v[2]){
        //     Ipoints++;
        // }
        for(int i=1;i<v.size()-1;i++){
            if(v[i]>v[i-1] && v[i]>v[i+1]){
                Ipoints++;
            }
        }
        // if(v[v.size()-1]<v[v.size()-2] && v[v.size()-2]>v[v.size()-3]){
        //     Ipoints++;
        // }
        // cout<<" I = "<<Ipoints;
        if(Ipoints > 1){
            cout<<"NO"<<endl;
            continue;
        }

        int Dpoints = 0;
        // if(v[0]>v[1] && v[1]<v[2]){
        //     Dpoints++;
        // }
        for(int i=1;i<v.size()-1;i++){
            if(v[i]<v[i-1] && v[i]<v[i+1]){
                Dpoints++;
            }
        }
        // if(v[v.size()-1]>v[v.size()-2] && v[v.size()-2]<v[v.size()-3]){
        //     Dpoints++;
        // }
        // cout<<" D = "<<Dpoints;
        if(Dpoints >= 1){
            cout<<"NO"<<endl;
            continue;
        }
        if(Ipoints + Dpoints > 1) {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;

    }
    return 0;
}