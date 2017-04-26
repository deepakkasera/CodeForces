#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	int sum_odd=INT_MAX;
    // bool isOdd = false;
    int sum=0,m=INT_MAX;
    for(int i=0;i<n;i++){
    	if(v[i] > 0){
    		sum += v[i];
    	}
    	if(v[i]%2!=0){
    		m = min(m,abs(v[i]));
    	}
    }
    if(sum%2 == 0) sum-=m;
	cout << sum << endl;
	return 0;
}