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
	ll n;
    	cin >> n;
	int j = 0;
	if(n*(n+1)/2%2) 
	{
		cout << "NO";
		return;
	}
	vector<int> v1, v2;
	if(n%4)
		j = 3;
	else
		j = 4;
	for(int i = 0 ; i < (n - 1)/4; ++i){
		v1.push_back(4*i + 1 + j);
		v1.push_back(4*i + 4 + j);
		v2.push_back(4*i + 2 + j);
		v2.push_back(4*i + 3 + j);
	}

	if(n%4){
		v1.push_back(1);
		v1.push_back(2);
		v2.push_back(3);
	}
	else{
		v1.push_back(1);
		v1.push_back(4);
		v2.push_back(2);
		v2.push_back(3);
	}

	cout << "YES\n";
	cout << v1.size() << "\n";
	for(int i: v1) cout << i << ' ';
	cout << "\n";
	cout << v2.size() << '\n';
   	for(int i: v2)  cout << i << ' ';
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

