#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc, char const *argv[])
{
	ll b,q,l,m;
	cin >> b >> q >> l >> m ;
	std::vector<ll> v(m);
	for(int i=0;i<m;++i) cin >> v[i] ;
	if(abs(b) > l){
		cout << "0\n";
		return 0;
	}
	if(b == 0){
		if(find(v.begin(),v.end(),0) == v.end()){
			cout << "inf\n";
		}
		else cout << "0\n";
		return 0;
	}
	if(q == 1)
	{
		if (find(v.begin(),v.end(),b) == v.end())
		{
			cout << "inf\n";
		}
		else cout << "0\n";
		return 0;
	}
	if(q == -1){
		if(find(v.begin(),v.end(),b) != v.end() && find(v.begin(),v.end(),-1*b) != v.end())
			cout << "0\n";
		else cout << "inf\n";
		return 0;
	}
	if(q == 0){
		if(find(v.begin(),v.end(),0) == v.end()){
			cout << "inf\n";
			return 0;
		}
		if(find(v.begin(),v.end(),b) == v.end()){
			cout << "1\n";
			return 0;
		}
		else {cout << "0\n";return 0;}
	}
	ll count=0;
	if(find(v.begin(),v.end(),b) == v.end()) count++;
	b *= q;
	while(b <= l && b >= -1*l){
		if(find(v.begin(),v.end(),b) == v.end()) count++;
		b *= q ;
	}
	cout << count << endl ;
	return 0;
}