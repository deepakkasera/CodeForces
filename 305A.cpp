#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int k,x,y;
	cin >> k;
	set<int> s;
	std::vector<int> v(k);
	bool flag1 = false,flag2 = false;
	for(int i=0;i<k;i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0;i<k;i++){
		x = v[i];
		if(x == 0 || x == 100)
			s.insert(x);
		else if (x < 10 && !flag1)
			s.insert(x) , flag1 = true;
		else if (x % 10 == 0 && !flag2)
			s.insert(x) , flag2 = true;
		else{
 			if(!flag1 && !flag2) s.insert(x),flag1=true,flag2=true;
		}
	}
	cout << s.size() << endl ;
	for(auto it : s){
		cout << it << " ";
	}
	return 0;
}