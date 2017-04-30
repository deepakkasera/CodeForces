// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <functional>
#include <set>
#define ll long long 
using namespace std;
// template<typename T> istream& operator>> (istream &in, vector<T> &a)
// {
// 	for(int i = 0; i < a.size(); ++i)
// 		in >> a[i];
// 	return in;
// }

// template<typename T> ostream& operator<< (ostream &out, const vector<T> &a)
// {
// 	for(int i = 0; i < a.size(); ++i)
// 		out << a[i] << " ";
// 	return out;
// }
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	map<char,int> m;
	m['0'] = 1;
	m['1'] = 0;
	m['2'] = 0;
	m['3'] = 0;
	m['4'] = 1;
	m['5'] = 0;
	m['6'] = 1;
	m['7'] = 0;
	m['8'] = 2;
	m['9'] = 1;
	m['a'] = 1;
	m['b'] = 2;
	m['c'] = 0;
	m['d'] = 1;
	m['e'] = 0;
	m['f'] = 0;
	char buffer[100];
	memset(buffer,0,sizeof(buffer));
	itoa(n,buffer,16);
	int len = strlen(buffer);
	long long cnt = 0;
	for(int i=0;i<len;i++){
		cnt += m[buffer[i]];
	}
	cout << cnt << endl;
 	return 0;
}