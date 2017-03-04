#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	cin >> n >> k;
	std::vector<int> v(n);
	std::vector<int> prefix(n+1,0);
	for(int i=0;i<n;i++) cin >> v[i];
	//for(int i=1;i<=n;i++) cout << v[i] << " ";	
	if(k == 1){
		cout << min_element(v.begin(),v.end())-v.begin() + 1;
		return 0;
	}
    for(int i=1;i<=n;i++){
    	prefix[i] += (prefix[i-1]+v[i-1]);
    }
    int j,sum=INT_MAX,ans,sum1;
    for(int i=0;i<n-k+1;i++){
    	j=i+k-1;
    	sum1=prefix[j+1]-prefix[i];
    	//cout << sum1 << " ";
    	if(sum1 < sum){
    		ans=i;
    		sum=sum1;
    	}
    }
    cout << ans+1;
	return 0;
}