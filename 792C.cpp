#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s,out="";
	cin >> s;
	std::vector<int> d[3];
	int len = s.length();
	int sum=0,temp;
	for(int i=0;i<len;i++){
		temp = s[i] - '0';
		sum = (sum + temp)%3;
		d[temp%3].push_back(i);
	}
	if(sum == 0){
		cout << s << endl;
		return 0;
	}
	if(sum == 2){
		swap(d[1],d[2]);
	}
	if(d[1].size() >= 1){
		string str = s;
		str.erase(str.begin() + d[1].back());
		 
	}
	return 0;
}