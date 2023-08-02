// joshi248
#include <bits/stdc++.h>
using namespace std;

#define ll long long
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

int n, p[20];
void solve(){
	cin >> n;
	ll s = 0, ans = 0;
	for(int i = 0 ; i < n ; ++i){
		cin >> p[i], s += p[i];
	}
	for(int i = 0; i<1<<n; ++i){
		ll ss = 0;
		for(int j = 0 ; j < n ; ++j){
				if(i&1<<j)
					ss += p[j];

		}
		if(ss <= s/2)
			ans = max(ans, ss);
	}
	cout << s - 2*ans << "\n";
}




int main(){

ios_base::sync_with_stdio(0);cin.tie(0);


int t = 1;
//cin >> t;
while(t--) solve();


    return 0;
}

