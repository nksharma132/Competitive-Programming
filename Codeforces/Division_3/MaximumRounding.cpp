//  Author : NITISH KUMAR SHARMA
//  Problem Link :- https://codeforces.com/contest/1857/problem/B

#include <bits/stdc++.h>
//  #include<ext/pb_ds/assoc_container.hpp>
//  #include<ext/pb_ds/tree_policy.hpp>
//  #include<ext/pb_ds/trie_policy.hpp>

using namespace std;

#define ll long long int
#define ld long double
#define mod 1000000007
#define inf 1e18
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define pll pair<ll, ll>
#define ump unordered_map
#define mid(l, u) (l + (u - l) / 2)
#define loop(i, a, b) for (int i = (a); i <= (b); i++)
#define loop_rev(i, a, b) for (int i = (a); i >= (b); i--)

void testCase()
{
    // CODE GOES HERE...

    string s;
    cin >> s;
    s = '0' + s;
    int position, index = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] >= '5')
        {
            s[i - 1]++;
            index = 1;
            position = i;
            break;
        }
    }
    if (index == 1)
    {
        for (int i = position; i < s.size(); i++)
            s[i] = '0';
    }
    for (int i = s.size() - 1; i >= 1; i--)
    {
        if (s[i] >= '5')
        {
            s[i] = '0';
            s[i - 1]++;
        }
    }
    if (s[0] != '0')
        cout << s[0];

    for (int i = 1; i < s.size(); i++)
        cout << s[i];
    cout << endl;

    // CODE END HERE...
}

int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        testCase();
    }

    return 0;
}