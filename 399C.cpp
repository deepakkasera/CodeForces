#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k,x;
	cin >> n >> k >> x;
	std::vector<int> v(n);
	for(int i=0;i<n;i++) cin >>v[i];
	sort(v.begin(),v.end());
    int i=0;
    while(k--){
    	while(i<n){
    		v[i] = v[i]^x;
    		i+=2;
    	}
    	i=0;
    }
    //for(int i=0;i<n;i++) cout << v[i] << " ";
    cout << *max_element(v.begin(),v.end()) <<" " << *min_element(v.begin(),v.end());
	return 0;
}