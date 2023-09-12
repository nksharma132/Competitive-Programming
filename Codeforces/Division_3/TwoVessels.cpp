#include<bits/stdc++.h>
using namespace std;

void testCase() {
	int a, b, c;
	cin>>a>>b>>c;

	if(a == b) {
		cout<<"0\n";
		return;
	}

	int diff = abs(a - b);

	if (ceil(diff/float(2)) <= c) {
		cout<<"1\n";
	} else {
		cout<<ceil(diff / float(2 * c))<<"\n";
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