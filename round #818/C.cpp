#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

#define ll long long

int ultimatePrint = 0;
int done = 0;

void printVector(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int getMinIndex(vector<int>& a){
    int minEle = a[0];
    int minIdx = 0;
    for(int i=0;i<a.size();i++){
        if(a[i] < minEle){
            minEle = a[i];
            minIdx = i;
        }
    }
    return minIdx;
}

bool check(vector<int>& a, vector<int>& b){
    int n = a.size();
    int printed = 0;
        for(int i=0;i<n;i++){
            if(a[i] > b[i]){
                cout<<"NO"<<endl;
                printed = 1;
                ultimatePrint = 1;
                break;
            }
        }
        if(printed == 1) return true;
    printf("fine till here 1");
        int flag = 0;
        for(int i=0;i<n;i++){
            // if((a[i] > a[i+1]) && a[i] < b[i]){
            //     cout<<"Printing from line 51"<<endl;
            //     cout<<"NO"<<endl;
            //     flag = 1;
            //     break;
            // }

            if(a[i] < b[i] && b[i] > (b[(i+1)%n]+1)){
                cout<<"NO"<<endl;
                flag = 1;
                ultimatePrint = 1;
            }
        }
        // printf("fine till here 2");
        if(flag == 1) return true;

        done = 1;
        return false;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a,b;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(x);
        }

        if(a == b){
            cout<<"Yes"<<endl;
            continue;
        }

        int printed = 0;
        for(int i=0;i<n;i++){
            if(a[i] > b[i]){
                cout<<"NO"<<endl;
                printed = 1;
                break;
            }
        }
        if(printed == 1) continue;

        int flag = 0;
        for(int i=0;i<n;i++){
            // if((a[i] > a[i+1]) && a[i] < b[i]){
            //     cout<<"Printing from line 51"<<endl;
            //     cout<<"NO"<<endl;
            //     flag = 1;
            //     break;
            // }

            if(a[i] < b[i] && b[i] > (b[(i+1)%n]+1)){
                cout<<"NO"<<endl;
                flag = 1;
                break;
            }
        }

        if(flag == 1) continue;

        // while(!check(a,b)){
        //     int idx = getMinIndex(a);
        //     if(a[idx] < b[idx] && a[idx] <= a[(idx+1)%n]){
        //         a[idx] = a[idx] + 1;
        //     }
        //     if(done == 1){
        //         break;
        //     }
        // }
        
        if(ultimatePrint == 0) cout<<"Yes"<<endl;

    }
    return 0;
}