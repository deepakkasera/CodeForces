#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int n=s.length();
	int cnt=0;
	bool flag = false;
	for(int i=0;i<n-1;i++){
		if(s[i]=='V' && s[i+1]=='K')
			cnt++;
		else if ((i<=n-2 && s[i]=='V' && s[i+1]=='V' && s[i+2]!='K') || (i<=n-1 && s[i]=='K' && s[i+1]=='K' && s[i-1]!='V'))
			flag = true;
	}
	if(flag) cnt++;
	cout << cnt << endl;
	return 0;
}