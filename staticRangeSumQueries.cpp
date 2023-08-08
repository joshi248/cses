// Created: 07/Aug/23 at 20 : 39
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ios_base::sync_with_stdio(0);cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; ++i)
        cin >> arr[i];

    vector<ll> pref(n + 1);
    for(int i = 1; i<=n; ++i){
        pref[i] = pref[i - 1] + arr[i - 1];
    }

    for(int i = 0 ; i < q; ++i){
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << "\n";
    }


return 0;
}
