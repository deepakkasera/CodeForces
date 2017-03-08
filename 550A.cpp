#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	if(s.find("AB")!=-1 && s.find("BA",s.find("AB")+2)!=-1){
		cout << "YES\n";
		return 0;
	}
	if((s.find("BA")!=-1 && s.find("AB",s.find("BA")+2)!=-1)){
		cout << "YES\n";
		return 0;
	}
	cout << "NO\n";
	return 0;
}