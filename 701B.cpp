#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,m,x,y;
	cin >> n >> m;
	set<ll> a;
	set<ll> b;
	while(m--){
		cin >> x >> y;
		a.insert(x);
		b.insert(y);
		cout << ((n-a.size())*(n-b.size())) << " ";
	}
	return 0;
}