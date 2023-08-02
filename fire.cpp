#include<iostream>
#include<algorithm>
using namespace std;

int arr[10000009];
void solve(){
	int n, b;
	cin >> n >> b;

	int ans = 0;
	for(int i = 0 ; i < n ; ++i){
		cin >> arr[i];
	}
	sort(begin(arr), end(arr), greater<int> ());
	int i = 0;
	while(b > 0){
		b -= arr[i];
		ans++;
		i += 1;
	}
	cout << ans << '\n';

}

int main(){
	int t;
	cin >> t;
	int i = 1;
	while(t--){
		cout << "Case #" << i << " :";
		solve();
		i += 1;
	}
	return 0;
}
