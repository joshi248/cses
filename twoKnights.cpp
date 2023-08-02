// joshi248
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
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
	int n;
	cin >> n;
	for(int k = 1; k <= n; ++k){
		ll a1 = k*k, a2 = (a1)*(a1 - 1)/2;
		// Number of ways to put 1st on chess board is a1
		// number of ways to put 2nd is -> (Remaining are k*k - 1) and both can be put there. so divide by 2

		if(k > 2){
			a2 -= 4 * (k - 1) * (k - 2);:q

			// This is the number of ways in which they "attack" each other for k > 2 because knights cannot move 1 place diagonally and horizontally or vertically, it must be greater than 2
		}
		cout << a2 << '\n';
	}
}




int main(){

ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
cout << fixed << setprecision(25);
cerr << fixed << setprecision(10);
auto start = std::chrono::high_resolution_clock::now();

int t = 1;
//cin >> t;
while(t--) solve();
auto stop = std::chrono::high_resolution_clock::now(); 
auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
//cerr << "Time taken : " << ((long double)duration.count())/((long double) 1e9) <<"s "<< endl;

    return 0;
}

