#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	int n,m,k,u,v,x;
	cin >> n >> m >> k;
	std::unordered_map<int,bool> map2;
	std::unordered_map<int,bool>::iterator it;
	for(int i=0;i<n;i++){
		map2[i]=true;
	}
	for(int i=0;i<m;i++){
		cin >> x;
		x--;
		map2[x] = false;	
	}
	int ans=0;
	if(!map2[ans]){
		cout << ans+1 << endl;
		return 0;
	}
	while(k--){
		cin >> u >> v;
		u--;
		v--;
		if(ans == u)
			ans = v;
		else if (ans == v)
			ans = u;
		if(!map2[ans]){
			break;
		}
	}
	ans+=1;
	cout << ans << "\n" ;
	return 0;
}