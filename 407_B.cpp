#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long b,q,l,m;
	cin >> b >> q >> l >> m;
	set<long long> s;
	long long x;
	for(int i=0;i<m;i++){
		cin >> x ;
		s.insert(x);
	}
	int count=0,ans=0;
	while(abs(b) <= l){
		count++;
		if(count > 50){
			if(ans <= 1)
				cout << ans << endl;
			else cout << "inf\n";
			return 0;
		}
		if(s.find(b) == s.end())
			ans++;
		b *= q;
	}
	cout << ans << endl;
	return 0;
}