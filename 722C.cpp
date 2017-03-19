#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll a[100005],prefix[100005];
int main(int argc, char const *argv[])
{
	int n ;
	cin >> n;
	for(int i = 1;i <= n ;i++){
		cin >> a[i] ;
		prefix[i] = prefix[i-1] + a[i];
	}
	return 0;
}