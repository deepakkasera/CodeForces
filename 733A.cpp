#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	int len = s.length();
	int j=-1,i;
	int ans = 0;
    for(i = 0 ; i < len ; i++){
    	if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
    		ans=max(ans,i-j),j=i;
    }
    ans = max(ans,i-j);
	cout<<ans;
	return 0;
}