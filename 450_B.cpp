#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int x,y,n,z=(int)(1e9+7);
	cin >> x >> y >> n;
	std::vector<int> v = {x,y,y-x,-x,-y,x-y};
	cout << (v[(n-1)%6]%z+z)%z<<endl;
	return 0;
}