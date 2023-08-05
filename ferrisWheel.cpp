#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ios_base::sync_with_stdio(0);cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i = 0 ; i < n ; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end()); // Sort all the children weight
    // Arrange in such a manner, that smallest weight child get seated
    /*
        x = 10
        2 3 7 9
        
        i = 0, j = 3
        v[i] + v[j] = 11 > x => j = j - 1
        
        i = 0, j = 2
        v[i] + v[j] = 9 < x (Nothing happens)

        i >= j(NO)
        ans++, i++, j--
        

        i = 1, j = 1
        i<j(NO)
        i>=j (YES)
        break

        ans = 1

        Maximum gondolas = number of children
        minimum = maximum when each child sits on one gondola - (put two children on one gondola without exceeding weight)


    */
    int ans = 0;
    for(int i = 0, j = n - 1; i < j; ){
        while(i < j && v[i] + v[j] > x)
            --j;
        if(i >= j)
            break;
        ++ans;
        ++i, --j;
    }
    cout << n - ans << "\n";


return 0;
}
