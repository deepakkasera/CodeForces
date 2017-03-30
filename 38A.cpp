#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a,b;
	cin >> n ;
	int sum=0;
	std::vector<int> d(n-1);
	for(int i=0;i<n-1;i++) cin >> d[i];
	cin >> a >> b ;
    a--;b--;
    for(int i=a;i<=b-1;i++)
    	sum += d[i];
    cout << sum << endl;
	return 0;
}