#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastio(){
	 ios_base::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
int main() {
	fastio();
	ll n;
	cin>>n;
	ll ar[n];
	for(int i=1;i<=n;i++)
	cin>>ar[i];
	for(int i=n-3;i>=1;i--)
	{
	 ar[i]=ar[i]+min(ar[i+1],min(ar[i+2],ar[i+3]));	
	
	}
	if(n==1)
	cout<<ar[1];
	else
	if(n==2)
	cout<<min(ar[1],ar[2]);
           else
        
	cout<<min(ar[1],min(ar[2],ar[3]));
	
	
	return 0;
}
