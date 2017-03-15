#include <bits/stdc++.h>
using namespace std;
bool comp(const pair<int,int> &p1,const pair<int,int> &p2){
	return p1.second < p2.second;
}
bool comp2(const pair<int,int> p1,const pair<int,int> p2){
	return p1.first > p2.first;
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,a,b;
	cin >> n;
	std::vector<pair <int,int> > v1;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		v1.push_back(make_pair(a,b));
	}
	int m ;
	cin >> m;
	std::vector<pair <int,int> > v2;
	for(int i=0;i<m;i++){
		cin >> a >> b;
		v2.push_back(make_pair(a,b));
	}
	cout << endl;
	sort(v1.begin(),v1.end(),comp);
	sort(v2.begin(),v2.end(),comp2);
	int x = v2[0].first - v1[0].second; 
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end(),comp);
	int y = v1[n-1].first - v2[0].second ;
	cout << ((max(x,y) <= 0) ? 0 : max(x,y)) << endl; 
	return 0; 
}