#include <bits/stdc++.h>
using namespace std;
set<long long int> s;
int n;
void func(long long num,int i,int j)
{
	if(num <= n){
		if(num) 
			s.insert(num);
		if(num + i) 
			func(num*10 + i,i,j);
		if(num + j)
			func(num*10 + j,i,j);
	}
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	for(int i=0;i<=9;i++){
		for(int j=0;j<=9;j++){
			func(0,i,j);
		}
	}
	cout << s.size() << endl;
	return 0;
}