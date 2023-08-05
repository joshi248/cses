// joshi248
// I thin overflow is happening. Refer to the python solution
// Refer to python one
#include <bits/stdc++.h>
using namespace std;

#define ll __int128_t
#define all(v) (v).begin(), (v).end()
#define pb push_back

template <typename T>
istream &operator>>(istream &istream, vector<T> &v){for (auto &e : v) cin >> e; return istream;}
template <typename T>
ostream &operator<<(ostream &ostream, vector<T> &v){for (auto &e : v) cout << e << ' '; return ostream;}

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template <typename T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;




void solve(){
    ll n;
    cin >> n;
    ll length = 1;

    while(n > 9 * pow(10, length - 1) * length){
        n -= 9 * pow(10, length - 1) * length;
        length += 1;
    }
    int quo = (n - 1)/length, rem = (n - 1)%length;
    ll ans = pow(10, length - 1) + quo;
    string s = (to_string(ans));
    cout << s[rem] << "\n";
    
    
}




int main(){

ios_base::sync_with_stdio(0);cin.tie(nullptr);
cout << fixed << setprecision(25);
cerr << fixed << setprecision(10);
auto start = std::chrono::high_resolution_clock::now();

int t = 1;
cin >> t;
while(t--) solve();
auto stop = std::chrono::high_resolution_clock::now(); 
auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
//cerr << "Time taken : " << ((long double)duration.count())/((long double) 1e9) <<"s "<< endl;

    return 0;
}