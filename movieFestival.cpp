// Created: 07/Aug/23 at 08 : 20
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mxN = 2e5;
int n;
array<int, 2> a[mxN];
int main(){
ios_base::sync_with_stdio(0);cin.tie(nullptr);

    cin >> n;
    for(int i = 0 ; i < n ; ++i){
        cin >> a[i][1] >> a[i][0];
    }
    sort(a, a+ n);
    int ans = 0, l = 0;
    for(int i = 0 ; i < n ; ++i){
        if(a[i][1] >= l){
            ++ans;
            l = a[i][0];
        }
    }
    cout << ans << "\n";


return 0;
}
