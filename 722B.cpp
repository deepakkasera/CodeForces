#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	string s;
	cin >> n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	bool flag=false;
    cin.ignore();
    for(int i=0;i<n;i++){
		std::getline(cin,s);
		int count=0;
		for(int j=0;j<s.length();j++){
			if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='y'){
				count++;
			}
		}
		if(count != v[i]){
			flag=true;
			break;
		}
	}
	if(!flag) cout<<"YES\n";
	else cout << "NO\n";
	return 0;
}