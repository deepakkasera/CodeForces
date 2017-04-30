#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	stack <char> st;
	for(int i=0;i<s.length();i++)
	{
		if(st.empty() || st.top() != s[i])
			st.push(s[i]);
		else st.pop();
	}
    (st.empty()) ? cout << "Yes\n" :  cout << "No\n";
	return 0;
}