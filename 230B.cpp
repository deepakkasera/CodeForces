#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n ;
	cin >> n ;
	ll a,b;
	for(int i=0;i<n;i++){
		cin >> a ;
		b = sqrtl(a);
		int j;
		for(j=2;j*j<=b;j++){
			if(b%j == 0) break ;
		}
	    if(b*b == a && j*j > b && a>1) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}