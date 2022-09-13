#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int min;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int found = 0;
        for(int i=1;i<n-1;i++){
            if(v[i] < v[i-1]){
                if(v[i] < v[i+1]){
                    found = 1;
                    break;
                }
                else if(v[i] == v[i+1]){
                    while(v[i] == v[i+1]){
                        i++;
                        if(i == v.size()-1){
                            break;
                        }
                    }
                    if(i == v.size()-1) break;
                    else if(v[i] < v[i+1]){
                        found = 1;
                        break;
                    }
                }
            }
        }
        if(found == 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}