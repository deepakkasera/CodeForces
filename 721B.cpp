#include <bits/stdc++.h>
using namespace std;
int a[105];
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,k;
	cin >> n >> k;
	string s,pass;
	for(int i=0;i<n;i++){
		cin >> s;
		a[s.length()]++;
	}
	cin >> pass;
	int y=0,x=0;
	for(int i=1;i<=pass.length();i++){
		if(i!=pass.length()) y+=a[i];
		else {y++;break;}
	}
	for(int i=1;i<=pass.length();i++){
		if(i!=pass.length()) x+=a[i];
		else {x+=a[i];break;}
	}
	cout << y+5*((y-1)/k) << " " << x+5*((x-1)/k) << endl;
	return 0;
}