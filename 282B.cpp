#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,a,g;
	string s = "";
	cin>>n;
	int sa=0,sg=0;
	for(int i=0;i<n;i++){
		cin >> a >> g;
		if(i == 0){
			if(a >= g) sg += g,s += 'G';
			else sa += a , s += 'A'; 
		}
		else{
			if(abs(sa+a - sg) <= 500){
				sa += a;
				s += 'A';
			}
			else if (abs(sg+g - sa) <= 500){
				sg += g;
				s += 'G';
			}
		}
	}
	if(s == "") cout << "-1\n";
	else cout << s << endl;
	return 0;
}