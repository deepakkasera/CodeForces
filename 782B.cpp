#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	std::vector<int> v(n);
	std::vector<int> s(n);
	for(int i=0;i<n;i++) cin >> v[i];
	for(int i=0;i<n;i++) cin >> s[i];
	std::vector< pair<int,int> > V(n);
    for(int i=0;i<n;i++) V[i] = make_pair(v[i],s[i]);
    sort(V.begin(),V.end());
    double t=0;
    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		if(t*V[j].second + t*V[i].second < V[j].first - V[i].first)
    			t = ((double)V[j].first - V[i].first)/(V[j].second+V[i].second);
    	}
    }
    //cout << std::fixed << setprecision(12) << t <<endl ;
	printf("%.12f\n",t);
	return 0;
}