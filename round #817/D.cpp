#include<bits/stdc++.h>
using namespace std;
//coded by Niraj

#define ll long long

void printVector(vector<ll>& v){
    for(ll i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

ll calculate(string s, ll n){
    ll left = 0,right = n-1;
    ll sum = 0;
    for(ll i=0;i<n;i++){
            if(s[i] == 'L'){
                sum += left;
            }
            else if(s[i] == 'R'){
                sum += right;
            }
            left++;
            right--;
    }
    return sum;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        string s;
        cin>>s;
        ll n = s.length();
        ll max = n*(n-1) - (n/2)*((n-1)/2);
        ll curr = calculate(s,n);
        // cout<<"max: "<<max<<" curr: "<<curr<<endl;
        if(curr == max){
            for(ll i=0;i<k;i++){
                cout<<max<<" ";
            }
            cout<<endl;
            continue;
        }
        ll sum=0;
        vector<ll> v,a;
        for(ll i=0;i<k;i++){
            if(s[i] == 'R'){
                sum += (k-i-1);
            }
            else{
                sum += i;
            }

            if(i < k-i-1 && s[i]=='L'){
                a.push_back(k-i-1-i);
            }
            else if(i > k-i-1 && s[i] == 'R'){
                a.push_back(i+i+1-n);
            }
        }
        sort(a.rbegin(),a.rend());
        ll res = 0;
        ll m = a.size();
        for(ll i=0;i<m;i++){
            res += a[i];
            v.push_back(sum+res);
        }
        for(ll i=m;i<n;i++){
            v.push_back(sum+res);
        }
        printVector(v);
    /*
        for(ll i=0;i<k;i++){    
            ll l=0,r=n-1;
                if(r < n-l && s[l] != 'R'){
                    curr += n-i-1;
                    s[l] = 'R';
                    l++;
                }
                else if(l > n - r && s[r] != 'L'){
                    curr += n-i-1;
                    s[r] = 'L';
                    r--;
                }                             
            cout<<curr<<" ";
        }
        cout<<endl; 
    */
    }
    return 0;
}