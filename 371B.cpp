#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int a,b;
	cin >> a >> b;
	std::vector<long int> va(6);
	std::vector<long int> vb(6);
	int n=a;
	for(int i=2;i<=5;i++){
		while(a%i == 0){
			va[i]++;
			a/=i;
		}
	}
	n=b;
	for(int i=2;i<=5;i++){
		while(b%i == 0){
			vb[i]++;
			b/=i;
		}
	} 
	if(a!=b){
		cout << "-1\n";
		return 0;
	}
	long long int ans=0;
	for(int i=0;i<6;i++){
		ans+=abs(va[i]-vb[i]);
	}
	cout << ans << endl;
	return 0;
}
