#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc, char const *argv[])
{
	int n ;
	cin >> n ;
	std::vector<ll> v(n);
	std::vector<ll> w(n);
	ll sum=0;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		sum += v[i];
		w[i] = sum ;
	}
	if(sum % 3 != 0)
	{
		cout << "0\n";
		return 0;
	}
	ll res = 0,ans=0;
	for (int i = 0; i < n; ++i)
	{
		if(i > 0 && i < n-1 && 3*w[i] == 2*w[n-1])
			ans += res;
		if(3*w[i] == w[n-1])
			res++;
	}
	cout << ans << endl;
	return 0;
}