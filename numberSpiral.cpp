#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		int y, x;
		cin >> y >> x;
		ll z = max(y, x);
		ll z2 = (z - 1) * (z - 1), ans;
		// (y, x) = (1, 2) -> val = 2
		// z = 2 = x, even
		// z2 = 1
		// 2 = 1 + 1 = z2 + y
		//
		//
		//(y, x) = (2, 1) -> val = 4;
		// z = 2, even
		// z2 = 1
		// val = 1 + 2 + 1 = 1 +  = z2 + 2*z - x
		//
		//	(y, x) = (3, 5) -> val = 23
		//	z = 5 = x, odd
		//	z2 = 16
		//	val = 16 + 7 = 16 + 10 - 3 = 16 + 2*z - y = z2 + 2*z - y
		//
		//	(y, x) = (5, 3) -> val = 19
		//	z = 5 = y, odd
		//	z2 = 16;
		//	val = 19 = 16 + 3 = z2 + 3 = z2 + x;	
		//

		if(z%2){
			if(y == z){
				ans = z2 + x;
			}
			else 
				ans = z2 + 2*z - y;
		}
		else{
			if(x == z){
				ans = z2 + y;
			}
			else
				ans = z2 + 2*z - x;
		}
		cout << ans << '\n';
	}


}
