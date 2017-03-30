#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const ll INF = 1e18;
ll n,a[100010],dp[100010][2],ans;
string s[100010][2];
int main(int argc, char const *argv[])
{
	int n ;
	cin >> n;
	for(ll i=1;i<=n;i++) cin >> a[i];
	for(ll i=1;i<=n;i++){
		cin >> s[i][0];
		s[i][1] = s[i][0];
		reverse(s[i][1].begin(),s[i][1].end());
	}
	dp[1][0] = 0 ;
	dp[1][1] = a[1];
	for(ll i=2;i<=n;i++){
		for(int j=0;j<2;j++){
			dp[i][j] = INF;
			for(int k=0;k<2;k++){
				if(s[i][j] >= s[i-1][k])
					dp[i][j] = min(dp[i][j],dp[i-1][k]+j*a[i]);
			}
		}
	}
	// for(int i=1;i<=n;i++){
	//     for(int j=0;j<2;j++){
	// 		cout << s[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	// for(int i=1;i<=n;i++){
	// 	for(int j=0;j<2;j++){
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	ans = min(dp[n][0],dp[n][1]);
	cout << (ans==INF ? -1 : ans) << endl;
	return 0;
}