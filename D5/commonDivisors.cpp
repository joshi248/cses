// Created: 13/Aug/23 at 10 : 34
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mxA = 1e6;
int freq[mxA + 1];

int main(){
ios_base::sync_with_stdio(0);cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        ++freq[x];
    }

    for(int i = mxA; i; --i){
        int d = 0;
        for(int j = i; j <= mxA; j += i){
            d += freq[j];
        }
        if(d > 1) {
            cout << i;
            break;
        }
    }


return 0;
}
