#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int n=s.length();
	a[0]=0;
	for (int i = 0; i < n-1; ++i)
	{
		if(s[i] == s[i+1])
			a[i+1] = a[i]+1;
		else a[i+1] = a[i];
	}
	int m,l,r;
	cin >> m ;
	while(m--){
		cin >> l >> r ;
		cout << (a[r-1]-a[l-1]) << endl ;
	}
	return 0;
}