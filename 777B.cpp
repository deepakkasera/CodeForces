#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	string s,m;
	cin >> s >> m;
	sort(s.begin(),s.end()); 
    sort(m.begin(),m.end());
    int j=n-1;
    for(int i=n-1;i>=0;i--){
    	if(m[j] >= s[i]) --j;
    }
    cout << j+1 << endl;
    j=0;
    for(int i=0;i<n;i++){
    	if(s[j] < m[i]) j++;
    }
    cout << j << endl;
	return 0;
}