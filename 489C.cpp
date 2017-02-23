#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int m,s;
	cin >> m >> s;
	string str;
	if(!s) {cout << (m==1 ? "0 0" : "-1 -1");return 0;};
	for(int i=0;i<m;i++){
		int t=min(s,9);
		str += (t + '0');
		s-=t;
	}
	if(s) {cout << "-1 -1\n";return 0;} 
	string str1 = str;
	int k=0;
	reverse(str1.begin(),str1.end()); 
	for(;str1[k] == '0';k++);
	str1[0]++,str1[k]--;
	cout << str1 << " " << str << endl;
	return 0;
}