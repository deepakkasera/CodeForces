#include <bits/stdc++.h>
using namespace std;
long long exponentiation(long long n,long long k,int m){
	long long res=1;
	while(k != 0){
		if(k%2 == 1) res=(res*n)%m;
		n=(n*n)%m;
		k /= 2;
	}
	return res;
}
int main(int argc, char const *argv[])
{
	long long n,k;
	int m;
	cin>>n>>k>>m;
    // long long ans=0;
    // for(long long int i =1;i<=n;i++){
    //    ans += ((n-i+1)%m)*exponentiation(i,k,m);
    // }
    long long ans=0;
    for(int i=0; i<m; i++)
	{
		long long sum = exponentiation(i, k, m)*((n-i+1+m)%m);
 
		if(i>0 && i<=n%m)
			ans = (ans + sum*((n/m+1)%m))%m;
		else
			ans = (ans + sum*((n/m)%m))%m;
	}
	cout << ans << endl;
	return 0;
}