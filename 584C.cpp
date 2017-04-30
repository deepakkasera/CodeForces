#include <bits/stdc++.h>
#define nMax 100005
using namespace std;
int n,t,k1,k2;
char a[nMax],b[nMax],c[nMax];
int main(int argc, char const *argv[])
{
	cin >> n >> t >> a >> b;
	k1 = k2 = n - t;
	for (int i = 0; i < n; ++i)
	{
		if(a[i] == b[i] && k1 && k2){
			c[i] = a[i];
			k1--;
			k2--;
		}
	}
	for(int i=0;i<n;i++){
		if(!c[i] && k1){
			c[i] = a[i];
			k1--;
		}
	}
	for(int i=0;i<n;i++){
		if(!c[i] && k2){
			c[i] = b[i];
			k2--;
		}
	}
	if(k1 == 0 && k2 == 0){
		for(int i=0;i<n;i++){
			if(!c[i]){
				c[i] = 'a';
				while(c[i] == a[i] || c[i] == b[i])
					c[i]++;
			}
		}
		cout << c << endl;
	}
	else cout << "-1\n";
	return 0;
}