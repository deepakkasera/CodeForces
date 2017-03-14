#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	int cnt=0,x;
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(i>0 && v[i]<v[i-1]){
			cnt++;
			x=i;
		}
	}
	if(!cnt){cout<<"0\n";return 0;}
	else if (cnt==1 && v[0]>=v[n-1]){cout<<n-x;return 0;}
	cout<<"-1\n";
	return 0;
}