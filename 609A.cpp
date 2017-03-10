#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	sort(v.rbegin(),v.rend());
    int i=0;
    while(m>0) m-=v[i++];
    cout<<i<<endl;
	return 0;
}