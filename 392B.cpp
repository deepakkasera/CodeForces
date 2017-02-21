#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string str,str2;
	cin >>str;
	int	cntR=0,cntB=0,cntY=0,cntG=0;
	int n = str.length();
	std::vector<int> v(n);
	for(int i=0;i<n;i++){
		if(str[i] == '!') v[i] = 0;
		else v[i] = 1;
	}
	while(count(str.begin(),str.end(),'!') != 0)
	{
	    for(int i=0;i<n;i++){
	         str2 = str.substr(i,4);
	         int c = count(str2.begin(),str2.end(),'!');
	         int pos = str2.find('!');
	         if(c == 1){
	         	//flag = true;
	         	cntR = count(str2.begin(),str2.end(),'R');
	         	cntB = count(str2.begin(),str2.end(),'B');
	         	cntY = count(str2.begin(),str2.end(),'Y');
	         	cntG = count(str2.begin(),str2.end(),'G');
	         	if(cntR == 0) str[i+pos] = 'R';
	         	else if(cntB == 0) str[i+pos] = 'B';
	         	else if(cntY == 0) str[i+pos] = 'Y';
	         	else if(cntG == 0) str[i+pos] = 'G';
	         }
	         else if(c > 1) continue;
	}
	}
	cntR=0,cntB=0,cntY=0,cntG=0;
	for(int i=0;i<n;i++){
		if(v[i] == 0){
			if(str[i] == 'R') cntR++;
			if(str[i] == 'B') cntB++;
			if(str[i] == 'Y') cntY++;
			if(str[i] == 'G') cntG++;
		}
	}
	cout << cntR << " " << cntB <<" " << cntY <<" " << cntG ;
	return 0;
}