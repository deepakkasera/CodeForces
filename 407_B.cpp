#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(int argc, char const *argv[])
{
	ll b1, q, l , m;
	cin >> b1 >> q >> l >> m;
	set <ll> s;
	for (int i = 0; i < m; ++i)
	{
		ll x;
		cin >> x;
		s.insert(x);
	}
	std::vector<ll>  gpTerms;
		int cunt = 0;
		while (abs(b1) <= l)
		{
			if (s.find(b1) == s.end())
				gpTerms.push_back(b1);
			b1 *= q;
			cunt++;
			if  (cunt > 400)
				break;
		}
			if (gpTerms.size() > 200)
			cout << "inf";
		else
			cout << gpTerms.size();
	return 0;
}