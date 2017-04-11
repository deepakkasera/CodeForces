#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	string s;
	cin>>n>>s;
	std::map<char,int> m;
	int last=0,curr=0,ans=0;
	for(int i=0;i<n;i++){
		m[s[i]]++;
		curr = m[s[i]];
		while(m[s[last]] != 1){
			m[s[last]]--;
			last++;
		}
		if(curr == 1)
			ans = i-last+1;
		else ans=min(ans,i-last+1);
	}
	cout << ans << "\n";
	return 0;
}