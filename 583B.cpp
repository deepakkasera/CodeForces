#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	int a=0,res=0,ans=0;
    while(1){
    	for(int i=0;i<n;i++){
    		if(v[i] <= a){
    			a++;
    		    v[i]=n+1;
    		}
    	}
    	if(a == n) break;
    	ans++;
    	for(int i=n-1;i>=0;i--){
    		if(v[i]<=a){
    			a++;
    			v[i]=n+1;
    		}
    	}
    	if(a==n) break;
    	ans++;
    }
    cout << ans << endl;
	return 0;
}