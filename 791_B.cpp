#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n , m , a , b;
	cin >> n >> m ;
	std::vector<std::vector<int> > v;
	for(int i=0;i<m;i++){
		cin >> a >> b ;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	return 0;
}