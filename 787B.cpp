#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m,k,x;
	cin>>n>>m;
	bool flag;
	for(int i=0;i<m;i++){
		cin>>k;
		set<int> s;
		flag=false;
		if(k == 1){cout << "YES\n";return 0;}
		for(int j=0;j<k;j++){
			cin>>x;
			s.insert(x);
			if(s.find(-1*x) != s.end())
				flag=true;
		}
		if(!flag){
			cout << "YES\n";
			return 0;
		}
	} 
	cout << "NO\n";
	return 0;
}