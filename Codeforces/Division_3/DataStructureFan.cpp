#include<bits/stdc++.h>
using namespace std;

#define ll long long


void testCase() {
	
	int n;
	cin>>n;

	int arr[n];
	for(int i = 0; i < n; i++)
		cin>>arr[i];

	string str;
	cin>>str;

	int q;
	cin>>q;

	while(q--) {
		int qtype;
		cin>>qtype;

		if(qtype == 1) {
			int l, r;
			cin>>l>>r;

			while(l <= r) {
				if(str[l-1] == '1')
					str[l-1] = '0';
				else
					str[l-1] = '1';
				l++;
			}
		} else {
			char ch;
			cin>>ch;

			int ans = 0;
			for(int i = 0; i < n; i++) {
				if(str[i] == ch) {
					ans = ans ^ arr[i];
				}
			}
			cout<<ans<<" ";
		}
	}
	cout<<"\n";
}

int main() {

	int t;
	cin>>t;

	while(t--) {
		testCase();
	}

	return 0;

}