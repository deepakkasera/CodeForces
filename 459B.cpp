#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(int argc, char const *argv[])
{
	ll n,x,minimum = INT_MAX,maximum = INT_MIN;
	cin >> n;
	map<ll,ll> m;
	while(n--){
		cin >> x;
		minimum = min(minimum,x);
		maximum = max(maximum,x);
		m[x]++;
	}
	if(maximum - minimum == 0){
		cout << "0" << " " << (m[maximum] * 1ll * (m[maximum]-1ll) / 2ll) << endl;
	}else{
		cout << maximum - minimum << " " << m[maximum] * 1ll * m[minimum] << endl; 
	}
	return 0;
}