#include <bits/stdc++.h>
#define pb push_back
#define MAX 150050 

using namespace std;

std::vector<int> v[MAX];

int main(int argc, char const *argv[])
{
	int n,m,x,y;
	cin >> n >> m ;
	for (int i = 0; i < m; ++i)
	{
		cin >> x >> y ;
		v[x].pb(y);
		v[y].pb(x);
	}
	for (int i = 1; i <= n; ++i)
	{
		v[i].pb(i);
		sort(v[i].begin(),v[i].end());
	}
	for (int i = 1; i <= n ; ++i)
	{
		for (int j = 0; j < v[i].size(); ++j)
		{
			if(v[i] != v[v[i][j]]){
				cout << "NO\n";
				return 0 ;
			}
		}
	}
	cout << "YES\n";
	return 0;
}