#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,b,m,a,x;
	long long sum1=0,sum2=0;
	cin >> n >> b;
	for(int i=0;i<n;i++){
		cin >> x;
		sum1+=x*pow(b,n-i-1);
	}
	cin >> m >> a;
	for(int i=0;i<m;i++){
		cin >> x;
		sum2+=x*pow(a,m-i-1);
	}
	if(sum1==sum2){cout<<"=\n";return 0;}
	if(sum1<sum2){cout<<"<\n";return 0;}
	if(sum1>sum2){cout<<">\n";return 0;}
	return 0;
}