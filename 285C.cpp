#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int a[n];
	for(int i=1;i<=n;i++) cin >> a[i];
	sort(a+1,a+n+1); 
    long long int ans=0;
    for(int i=1;i<=n;i++)
    	ans += abs(i-a[i]);
    cout << ans << endl;
	return 0;
}