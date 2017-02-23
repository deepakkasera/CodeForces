#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k,x;
	cin >> n >> k >> x;
	std::vector<int> v(n);
	for(int i=0;i<n;i++) cin >>v[i];
    int i=0;
    k%=1024;
    while(k--){
    	sort(v.begin(),v.end());
    	while(i<n){
    		v[i] = v[i]^x;
    		i+=2;
    	}
    	i=0;
    }
    //for(int i=0;i<n;i++) cout << v[i] << " ";
    cout << *max_element(v.begin(),v.end()) <<" " << *min_element(v.begin(),v.end()) << endl ;
	return 0;
}