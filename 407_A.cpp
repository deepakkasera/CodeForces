#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	long long k;
	cin >> k ;
	int count=0,even=0;
	int mas[n];
	for(int i=0;i<n;i++){
		cin >> mas[i];
		count += mas[i]/k;
		if(mas[i]%k!=0) count++;
	}
	count = count/2 + count%2;
	cout << count << endl;
	return 0;
}