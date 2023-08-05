#include<bits/stdc++.h>
using namespace std;
#define ll long long


// TLE with unordered_set
int main(){
ios_base::sync_with_stdio(0);cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;
    for(int i = 0 ; i < n ; ++i){
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size();


return 0;
}
