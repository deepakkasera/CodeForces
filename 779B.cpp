#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	int k;
	cin >> s >> k;
	int i = s.length()-1,cnt=0;
	while(i>=0 && k!=0){
		if(s[i]=='0') k--;
		else cnt++;
		i--;
	}
	cout << ((i<0) ? s.length()-1 : cnt);
	return 0;
}
