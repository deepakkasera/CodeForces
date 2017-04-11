#include <bits/stdc++.h>
#define ll long long
using namespace std;
std::vector<ll> prefixVec;
void prefix(std::vector<ll> &v,int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		prefixVec.push_back( (v[i]-v[i+1]) * pow(-1,i-1) );
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n ;
	std::vector<ll> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i] ;
	}
	prefix(v,n);
	return 0;
}