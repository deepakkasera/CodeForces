#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s1,s2;
	cin >> s1 >> s2;
	int n=s2.length();
	int a=0,b=0,q=0;
	for(int i=0;i<n;i++){
		if(s1[i] == '+') a++;
		if(s2[i] == '+') b++;
		if(s2[i] == '?') q++;
	}
	int ans=0;
	for(int i=0;i<(1<<q);i++){
		if(__builtin_popcount(i) + b == a) ++ans;
	}
	cout << std::fixed << setprecision(12);
	cout << ((double)ans)/((double)(1<<q)) << endl;
	return 0;
}