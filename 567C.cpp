#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	std::vector<long long > v(n);
	map<long long ,long long > left,right;
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
		right[v[i]]++;
	}
	long long ans=0;
	for(int i=0;i<n;i++)
	{
		right[v[i]]--;
		if(v[i]%k == 0)
			ans += ( left[v[i]/k] * right[v[i]*k] );
		left[v[i]]++;
	}
	cout << ans << endl;
	return 0;
}