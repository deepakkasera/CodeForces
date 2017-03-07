#include <bits/stdc++.h>
using namespace std;
int isPrime(int i){
	for(int j=2;j*j<=i;j++)
		if(i%j == 0) return 1;
	return 0;
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	cout << (n<3 ? 1:2) << endl;
	for(int i=2;i<=n+1;i++)
		cout << isPrime(i)+1 << " " ;
	return 0;
}