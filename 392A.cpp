#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,count = 0;
	cin >> n;
	std::vector<int> v(n);
	for(int i=0;i<n;i++)  cin >> v[i];
	int minimum = *max_element(v.begin(),v.end());
    for(int i=0;i<n;i++){
    	while(v[i] < minimum) v[i]++ ,count++;
    }
    cout << count;
	return 0;
}
