#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(ll n){
	if(n == 2) return true;
	if(n==1 || n%2 == 0) return false;
	for(ll i=3;i*i<=n;i++){
		if(n%i == 0) return false;
	}
	return true;
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	ll x,y;
	while(n--){
		cin >> x ;
		y = sqrtl(x) ;
		if(isPrime(y) && y*y == x) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}