// Created: 07/Aug/23 at 08 : 28
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ios_base::sync_with_stdio(0);cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    map<int, int> mp;
    for(int i = 0 ; i < n ; ++i){
        int a;
        cin >> a;
        if(mp.find(x - a) != mp.end()){
            cout << mp[x - a] + 1 << " " << i + 1;
            return 0;
        }
        mp[a] = i;
    }
    cout << "IMPOSSIBLE" << "\n";


return 0;
}
