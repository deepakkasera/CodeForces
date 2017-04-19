#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	int cnt=0;
	int n = s.length();
	bool flag=false;
	for(int i=0;i<n;i++){
		if(s[i]=='V' && s[i+1]=='K') cnt++;
		else if (s[i]=='V' && s[i+1]=='V' && s[i+2]=='K') flag=true;
		else if (s[i]=='K' && s[i+1]=='K') flag=true;
	}
	if(flag) cnt++;
	cout << cnt << endl;	
	return 0;
}
