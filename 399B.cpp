#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll sum(std::vector<ll> &v){
	std::vector<ll>::iterator it;
	ll sum=0;
	for(it=v.begin();it!=v.end();it++)
		sum += *it;
	return sum;
}
int main(int argc, char const *argv[])
{
	ll n;
	int l,r;
	cin >> n >> l >> r;
	if( n == 1 || n == 0){
		cout << n ;
		return 0;
	}
	std::vector<ll> v;
	v.push_back(n);
	int i=0;
	while((count(v.begin(), v.end(),0) + count(v.begin(), v.end(),1) != v.size()) && i<v.size()){
		if(v[i] > 1){
			int s = v[i];
			v[i] = s/2;
			v[v.size()] = v[i+1];
			v[v.size()+1] = v[i+2];
			v[i+1]=s%2;
			v[i+2] = s/2;
			for(int i=0;i<v.size();i++) cout << v[i] <<" ";
	        cout << endl;
		}
		else i++;
	}
	l--,r--;
	//cout << v.size() << endl;
	//for(int i=0;i<v.size();i++) cout << v[i] <<" ";
	cout << endl;
	cout << count(v.begin()+l,v.begin()+r-1,1);
	return 0;
}