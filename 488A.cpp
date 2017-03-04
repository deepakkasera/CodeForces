#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll a;
	cin >> a;
	ll b=1;
	while(to_string(a+b).find('8') == -1) b++;
	cout << b << endl;
	return 0;
}