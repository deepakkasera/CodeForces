#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n,x,a,d=0,b[1000009];
	cin >> n >> x;
	for(int i=1;i<=n;i++){
		cin >> a;
		d += b[a^x];
		b[a]++;
	}
	cout << d << endl;
	return 0;
}