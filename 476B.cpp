#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s1,s2;
	cin >> s1 >> s2;
	int correctPos=0;
	int inc1=count(s1.begin(),s1.end(),'+');
	int dec1=count(s1.begin(),s1.end(),'-');
	correctPos = correctPos + inc1 - dec1;
	int inc2=count(s2.begin(),s2.end(),'+');
	int dec2=count(s2.begin(),s2.end(),'-');
	if(inc1 == inc2 && dec1==dec2){
		cout << "1.000000000000" ;
		return 0;
	}
	return 0;
}