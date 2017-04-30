#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,sx,sy,ex,ey;
	string s;
	cin >> t >> sx >> sy >> ex >> ey;
	cin >> s;
	for(int i=0;i<t;i++){
		if(s[i] == 'N'){
			if(abs(sy+1-ey) > abs(sy-ey)) continue;
			else sy += 1;
		}
		else if (s[i] == 'S'){
			if(abs(sy-1-ey) > abs(sy-ey)) continue;
			else sy -= 1;
		}
		else if (s[i] == 'E'){
			if(abs(sx+1-ex) > abs(sx-ex)) continue;
			else sx += 1;
		}
		else{
			if(abs(sx-1-ex) > abs(sx-ex)) continue;
			else sx -= 1;
		}
		if(sx == ex && sy == ey){
			cout << i+1 << endl;
			return 0;
		}
	}
	cout << "-1\n";
	return 0;
}