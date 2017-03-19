#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m;
	cin >> n >> m ;
	int a,b;
	std::vector<pair <int,int> > v;
	for(int i=0;i<m;i++){
		cin >> a >> b ;
		v.push_back(make_pair(a,b));
	}
	int x[n+1];
	for(int i=0;i<n+1;i++) 	x[i]=0;
	for(int i=0;i<m;i++){
		x[v[i].first]++;
		x[v[i].second]++;
	}
	bool flag=false;
	int sum=0;
	for(int i=0;i<n+1;i++){
		sum += x[i];
		if(x[i] != 1 && x[i]!=0){
			flag=true;
		}
	}
	if(!flag && sum == 2*m){
		cout << "YES\n";
		return 0;
	}
	for(int i=0;i<n+1;i++){
		if(x[i]%2 != 0){
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}