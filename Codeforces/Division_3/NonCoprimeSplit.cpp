#include<bits/stdc++.h>
using namespace std;

#define ll long long


bool isPrime(ll a) {
	if(a == 1)
		return false;
	if(a == 2 or a == 3)
		return true;

	for(int i = 2; i <= sqrt(a); i++) {
		if(a % i == 0)
			return false;
	}
	return true;
}


void testCase() {
	
	ll a, b;
	cin>>a>>b;

	if(a != b) {
		if(b == 2 or b == 3)
			cout<<"-1\n";
		else if(b % 2 == 0)
			cout<<b/2<<" "<<b/2<<"\n";
		else
			cout<<(b-1)/2<<" "<<(b-1)/2<<"\n";
	} else {
		if(a == 1)
			cout<<"-1\n";
		else if(isPrime(a))
			cout<<"-1\n";
		else {
			int ans;
			for(int i = 2; i <= sqrt(a); i++) {
				if(a % i == 0) {
					ans = i;
					break;
				}
			}
			cout<<ans<<" "<<a-ans<<"\n";
		}
	}

}

int main() {

	int t;
	cin>>t;

	while(t--) {
		testCase();
	}

	return 0;

}