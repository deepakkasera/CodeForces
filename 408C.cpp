#include <bits/stdc++.h>
#define ll long long 
#define pb push_back
using namespace std;
// std::vector<ll> tree[/300005];
// int a[300005];
// std::vector<ll> v;
// int ans = INT_MAX;

int main(int argc, char const *argv[])
{
    int n,u,v;
    cin >> n;
    std::vector<int> a(n);
    std::vector< vector<ll> > gr;
    multiset<ll> mset;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        mset.insert(a[i]);
    }
    for(int i=0;i<n-1;i++){
        cin>>u>>v;
        u--;
        v--;
        gr[u].pb(v);
        gr[v].pb(u);
    }
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        int temp = a[i];
        mset.erase(mset.find(a[i]));
        for(auto it : gr[i]){
            mset.erase(mset.find(a[it]));
            temp = max(temp,a[it]+1);
        }
        if(!mset.empty()){
            temp = max(temp,*mset.begin()+2);
        }
        ans = min(ans,temp);
        mset.insert(a[i]);
        for(auto j : gr[i]){
            mset.insert(a[j]);
        }
    }
    cout << ans << endl;
    return 0;
}