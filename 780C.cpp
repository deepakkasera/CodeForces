#include <bits/stdc++.h>
using namespace std;
std::vector<int> v[200010];
bool visited[200010];
int color[200010];
int cnt[200010];
void dfs(int vertex,int c){
	int cc = 1;
	for(int i=0;i<v[vertex].size();i++){
		if(v[vertex][i] != c){
			while(cc == color[vertex] || cc == color[c])
				cc++;
			color[v[vertex][i]] = cc++;
		}
	}
	for(int i=0;i<v[vertex].size();i++)
		if(v[vertex][i] != c)
			dfs(v[vertex][i],vertex);
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n ;
	int x,y;
	for(int i=0;i<n-1;i++){
		cin >> x >> y ;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	color[1] = 1;
	dfs(1,0);
	int ans=0;
	for(int i=1;i<=n;i++) ans=max(ans,color[i]);
	cout << ans << endl ;
    for(int i=1;i<=n;i++)
    	cout << color[i] << " ";
	return 0;
}