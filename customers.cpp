// Created: 07/Aug/23 at 08 : 04
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ar array

int main(){
ios_base::sync_with_stdio(0);cin.tie(nullptr);

    set<ar<int, 2>> s;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; ++i){
        int a, b;
        cin >> a >> b;
        s.insert({2*a, 1});
        s.insert({2*b + 1, -1});
    }
    int ans = 0, c = 0;
    for(ar<int, 2> a: s)
    {
        c += a[1];
        ans = max(c, ans);
    }
    cout << ans << "\n";



return 0;
}
