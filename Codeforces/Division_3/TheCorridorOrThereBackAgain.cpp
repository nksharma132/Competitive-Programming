#include<bits/stdc++.h>
using namespace std;

void testCase() {
	set<pair<int, int>> sp;
	int n;
	cin>>n;

	for(int i = 0; i < n; i++) {
		int a, b;
		cin>>a>>b;

		sp.emplace(a,b);
	}

	int k = 299;

	for(auto x: sp) {
		int min = (x.second - 1) / 2;
		if(x.first + min < k) {
			k = x.first + min;
		}
	}
	cout<<k<<"\n";
}

int main() {

	int t;
	cin>>t;

	while(t--) {
		testCase();
	}

	return 0;

}