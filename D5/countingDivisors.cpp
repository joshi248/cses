// Created: 13/Aug/23 at 09 : 51
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ios_base::sync_with_stdio(0);cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        map<int, int> mp;
        for(int i = 2; i*i <= x; ++i){
            while(x%i==0){
                mp[i]++;
                x /= i;
            }
        }
        if(x > 1) mp[x]++;
        ll ans = 1;
        for(auto e: mp)
            ans *= (e.second + 1);

        cout << ans << "\n";
    }


return 0;
}
