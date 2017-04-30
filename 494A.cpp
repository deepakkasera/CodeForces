#include <bits/stdc++.h>
using namespace std;
int ans[100005];
int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	int n = s.length();
	int num=0,x=0,j=0,lastIndex;
	for (int i = 0; i < n; ++i)
	{
		if(s[i] == '(') num++;
		if(s[i] == ')') num--;
		if(s[i] == '#'){
			num--;
			ans[++j] = 1;
			lastIndex = i;
		}
		if(num < 0){
			cout << "-1\n";
			return 0;
		}
	}
	for(int i = n-1; i>lastIndex; i--)
	{
		if(s[i] == '(') x++;
		if(s[i] == ')') x--;
		if(x > 0)
		{
			cout << "-1\n";
			return 0;
	    }
	}
	ans[j] += num;
	for(int i=1;i<=j;i++){
		cout << ans[i] << endl;
	}
	return 0;
}