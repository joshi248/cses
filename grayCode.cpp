#include<bits/stdc++.h>
using namespace std;
#define ll long long

void binary(int x, int len){
    for(int i = len - 1; i >= 0; --i)
        cout << ((x>>i)&1);
    cout << "\n";
}

int main(){
ios_base::sync_with_stdio(0);cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> ans;
    for(int i =  0 ; i < 1<<n ; ++i)
        ans.push_back(i^(i>>1));
    
    for(int a: ans)
        binary(a, n);


return 0;
}
