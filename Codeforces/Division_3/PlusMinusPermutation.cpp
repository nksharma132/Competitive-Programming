#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
	if(y == 0)
		return x;

	return gcd(y, x%y);
}

long long sum_n(long long n) {
	return n*(n+1) / 2;
}

void testCase() {
	long long n, x, y;
	cin>>n>>x>>y;

	long long lcm_xy = (x * y) / gcd(x,y);

	long long lsum = 0, usum = 0;
	long long cntx = n/x - n/lcm_xy;
	long long cnty = n/y - n/lcm_xy;

	usum = sum_n(n) - sum_n(n-cntx);
	lsum = sum_n(cnty);

	cout<<usum - lsum<<"\n";
}

int main() {

	int t;
	cin>>t;

	while(t--) {
		testCase();
	}

	return 0;

}