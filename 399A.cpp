#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	sort(v.begin(), v.end());
    int count=0;
    int j,k;
    for(int i=1;i<n-1;i++){
    	if(v[i] > v[0] && v[i] < v[n-1])count++;
    }
    cout << count << endl; 
	return 0;
}