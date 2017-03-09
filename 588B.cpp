#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n;
	cin >> n;
	ll x,y=n;
	for(ll i=2;i*i<=n;i++){
		x=0;
		while(y%i == 0){
			x++;
			y/=i;
		}
		if(x>=2) n/=(pow(i,x-1));
	}
	cout << n << endl;
	return 0;
}