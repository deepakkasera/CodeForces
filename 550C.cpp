#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	int a,n;
	// s="00"+s;
	n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]=='0' || s[i]=='8'){
			cout << "YES\n" << s[i] << endl;
			return 0; 
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			a=(s[i]-'0')*10+(s[j]-'0');
			if(a%8==0){
				cout << "YES\n" << a << endl;
				return 0;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				a=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
				if(a%8==0){
					cout << "YES\n" << a << endl;
					return 0;
				}
			}
		}
	}
	cout << "NO\n";
	return 0;
}