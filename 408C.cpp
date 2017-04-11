#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,x,y;
	cin >> n;
	std::vector<int> v(n);
	std::vector<int>::iterator it;
	for(int i=0;i<n;i++) cin >> v[i];
	std::vector< pair<int,int> > u;
    for (int i = 0; i < n-1; ++i)
    {
    	cin >> x >> y;
    	u.push_back(make_pair(x,y));
    }
    int index = max_element(v.begin(),v.end()) - v.begin();
    int ans = v[index];
    cout << ans << endl; 
	return 0;
}