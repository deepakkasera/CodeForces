#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b,i=0;
	cin >> a >> b ;
	while(a <= b){
		a = a*3;
		b = b*2;
		i++;
	} 
	cout << i << endl ;
	return 0;
}