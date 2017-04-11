#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,k;
	//std::vector<long long> v(n);
	//int v[n];
	cin >> n >> m >> k;
	// for (int i = 0; i < n; ++i)
	// {
	// 	cin >> v[i];
	// }
	int ans=INT_MAX;
	int x;
	for(int i=1;i<=n;i++){
		cin >> x;
		if(x!=0 && x<=k){
			ans = min(ans,abs(m-i)*10);
		}
	}
	cout << ans << endl;
	return 0;
}