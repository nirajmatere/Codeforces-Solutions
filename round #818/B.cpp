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

/*
X..
..X
.X.

XX
XX

.X..X.
X..X..
..X..X
.X..X.
X..X..
..X..X

*/


int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, k, x, y;
        cin>>n>>k>>x>>y;
        char a[n+1][n+1];
        for (ll i = 1; i <= n; i++){
            for (ll j = 1; j <= n; j++){
                a[i][j] = '.';
            }
        }

        for (ll i = 2; i <= 2*n; i++){
            if (abs(x + y - i) % k == 0){
                for (ll j = 1; j <= n; j++){
                    for (ll k = 1; k <= n; k++){
                        if (j + k == i){
                            a[j][k] = 'X';
                        }
                    }
                }
            }
        }


        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++){
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}