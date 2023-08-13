// Created: 13/Aug/23 at 12 : 56
#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mxA = 1e6, M = 1e9 + 7;
ll iv[mxA + 1], f1[mxA + 1], f2[mxA + 1];

int main(){
ios_base::sync_with_stdio(0);cin.tie(nullptr);

    iv[1] = 1;
    for(int i = 2; i <= mxA; ++i){
        iv[i] = M - M/i * iv[M%i] % M;
    }
    f1[0] = f2[0] = 1;
    for(int i = 1; i <= mxA; ++i){
        f1[i] = f1[i - 1] * i % M;
        f2[i] = f2[i - 1] * iv[i] % M;
    }

    int n;
    cin >> n;
    while(n--){
        int a, b;
        cin >> a >> b;
        cout << f1[a] * f2[b] % M * f2[a - b] % M << "\n";
    }
    


return 0;
}
