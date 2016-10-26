#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	long long a,b;
	std::vector<int> v;
	std::vector<int>::iterator it;
	cin>>a>>b;
	bool flag=false;
	while(b>a){
        v.push_back(b);
		if(b%2 == 0)  b/=2;
		else if(b%10 == 1) b/=10;
		else break;
	}
	if(b==a){
		cout<<"YES"<<"\n";
		cout<<v.size()+1<<"\n"<<a<<" ";
		for(it = v.end()-1 ; it >= v.begin() ; it--)  cout<<*it<<" ";
			return 0;
	}
	cout<<"NO";
	return 0;
}
 