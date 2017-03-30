#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	cin >> n >> k ;
	int x,sum=0;
	while(n--){
		cin>>x;
		sum += ceil((double)x/(double)k);
	}
	cout<<sum/2+sum%2<<endl;
	return 0;
}