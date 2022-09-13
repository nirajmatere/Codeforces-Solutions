#include<bits/stdc++.h>
using namespace std;
//coded by Niraj


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxxr=0,maxxl=0,maxyu=0,maxyd=0;
        for(int i=0;i<n;i++){
            int x,y;++++++++++++++++++
            cin>>x>>y;
            if(x == 0 && y !=0){
                if(y>0){
                    if(y > maxyu){
                        maxyu = y;
                    }
                    
                }
                if(y<0){
                    if(y < maxyd){
                        maxyd = y;
                    }
                }
            }
            else if(x !=0 && y==0){
                if(x>0){
                    if(x > maxxr){
                        maxxr = x;
                    }
                    
                }
                if(x<0){
                    if(x < maxxl){
                        maxxl = x;
                    }
                }
            }
        }
        // cout<<maxxr<<" "<<maxxl<<" "<<maxyu<<" "<<maxyd<<endl;;

        int ans = (maxxr - maxxl)*2 + (maxyu - maxyd)*2;
        cout<<ans<<endl;
    }
    return 0;
}