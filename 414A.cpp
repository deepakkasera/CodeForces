#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	cin >> n >> k;
	if(k < n/2){
		cout << "-1\n";
		return 0;
	}
	if(n==1){
		cout << (k?"-1\n":"1\n");
		return 0;
	}
	cout << (k-(n-2)/2) << " " << 2*(k-(n-2)/2) << " ";
	for(int i=2;i<n;i++){
		cout << 1000000+i << " ";
	}
	return 0;
}