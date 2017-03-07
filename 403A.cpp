#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,x,temp=0,ans=0;
	cin >> n;
	std::vector<bool> v(n);
	for(int i=0;i<2*n;i++){
		cin >> x;
		if(v[x-1]){
			ans = max(temp,ans);
			temp--;
		}
		else if (!v[x-1]){
			v[x-1] = true;
			temp++;
		}
	}
	cout << ans;
	return 0;
}