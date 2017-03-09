#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc, char const *argv[])
{
	ll n;
	cin >> n;
	for(ll i=2;i*i<=n;i++){
		while(n%(i*i)==0)
			n/=i;
	}
	cout << n << endl;
	return 0;
}