#include <bits/stdc++.h>
using namespace std;
int min(int a,int b,int c){
	return min(min(a,b),c);
}
int main(int argc, char const *argv[])
{
	int n,k,l,d,c,p,nl,np;
	cin >> n >> k >> l >> d >> c >> p >> nl >> np ;
	int totalML = k*l ;
	int totalSlices = c*d ;
	int salt = p/np;
	cout << min(totalML/nl,totalSlices,salt)/n << endl ;
	return 0;
}