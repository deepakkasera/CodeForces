#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,x;
	cin >> n;
	std::vector<int> v;
	for(int i=0;i<n;i++){
		cin >> x;
		v.push_back(x);
	}
	for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
		cout<<endl;
	for(int i : v){
		cout<< i << " "; 
	}
	cout<<endl;
	return 0;
}