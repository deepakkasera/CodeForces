#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a;
	cin >> n >> a;
	std::vector<int> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	a--;
    int ans=0;
    if (v[a] == 1) ans++;
	for(int i=1;i<=max(a,n-a);i++){
		if(a+i<n && a-i>=0){
			if(v[a+i] == v[a-i] && v[a+i]==1) ans+=2;
		}
		else if(a+i<n && !(a-i>=0)){
			if(v[a+i] == 1) ans++;
		}
		else if(a-i>=0 && !(a+i<0)){
			if(v[a-i] == 1) ans++;
		}
	} 
	cout << ans << endl;
	return 0;
}