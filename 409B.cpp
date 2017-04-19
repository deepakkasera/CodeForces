#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string x,y,z;
	cin>>x>>y;
	int n=x.length();
	char c;
	for(int i=0;i<n;i++){
		if(x[i] < y[i]){
			cout << "-1\n";
			return 0;
		}else{
			z += y[i];
		}
	}
	cout << z << endl;
	return 0;
}