#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	// string s;
	std::vector<string> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	int cnt;
	string str;
	int ans = INT_MAX;
	for(int i=0;i<n;i++){
		cnt = 0;
		for(int j=0;j<n;j++){
			str = v[j] + v[j];
			if(str.find(v[i]) == string::npos){cout << "-1\n";return 0;}
			cnt += str.find(v[i]);
		}
		ans = min(ans,cnt);
	}
	cout << ans << endl;
	return 0;
}