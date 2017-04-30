#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;
int main(int argc, char const *argv[])
{
	ll a,b;
	cin >> a >> b;
	long long ans1,ans2;
	ans1 = b*(b-1)/2 % MOD;
	ans2 = a*(a+1)/2 % MOD;
	ans2 = ( b*ans2 + a ) % MOD;
	ans1 = ( ans1 * ans2 ) % MOD;
	cout << ans1 << endl;
	return 0;
}