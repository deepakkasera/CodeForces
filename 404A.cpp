	#include <bits/stdc++.h>
	using namespace std;
	int main(int argc, char const *argv[])
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		int n;
		cin >> n;
		std::vector<string> v(n);
		for(int i=0;i<n;i++){
			cin >> v[i];
		}
		int a=count(v.begin(),v.end(),"Icosahedron");
		int res = 0;
		res += a*20;
		a = count(v.begin(),v.end(),"Dodecahedron");
		res += a*12;
		a = count(v.begin(),v.end(),"Octahedron");
		res += a*8;
		a = count(v.begin(),v.end(),"Cube");
		res += a*6;
		a = count(v.begin(),v.end(),"Tetrahedron");
		res += a*4;
		cout << res << endl;
		return 0;
	}