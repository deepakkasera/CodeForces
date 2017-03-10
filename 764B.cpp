#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	long int a[n];
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n/2;i+=2){
		swap(a[i],a[n-i+1]);
	}
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}