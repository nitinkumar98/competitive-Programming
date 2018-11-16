#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastio(){
	 ios_base::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
}
vector<pair<int,int>>dp;
ll leave(ll key,ll b[],ll n)
{
	ll low=0;
	ll high=n-1;
	if(key<b[low])
	return b[low];
	if(key>b[high])
	return -1;
	while(low<=high)
	{
		ll mid=(low+high)/2;
		if(b[mid]==key)
		return b[mid];
		if(b[mid]<key&&b[mid+1]>key)
		return b[mid+1];
		else
		if(b[mid]<key)
		low=mid+1;
		else
		high=mid-1;
		
	}
}

ll come(ll key,ll ar[],ll n)
{
	ll low=0;
	ll high=n-1;
	if(key<ar[low])
	return -1;
	if(key>ar[high])
	return ar[high];
	while(low<=high)
	{
		ll mid=(low+high)/2;
		if(ar[mid]==key||ar[mid]<key&&ar[mid+1]>key)
		return ar[mid];
		else
		if(ar[mid]<key)
		low=mid+1;
		else
		high=mid-1;
		
	}
}

int main() {
	fastio();
	
	ll n,x,y,ans,res,mn=100000000;
	cin>>n>>x>>y;
	for(int i=0;i<n;i++)
	{
		ll a,b;
		cin>>a>>b;
		dp.push_back(make_pair(a,b));
	}
	ll ar[x],b[y];
	for(int i=0;i<x;i++)
	cin>>ar[i];
	for(int j=0;j<y;j++)
	cin>>b[j];
	sort(ar,ar+x);
	sort(b,b+y);
	for(int i=0;i<dp.size();i++)
	{
		ans=come(dp[i].first,ar,x);
		res=leave(dp[i].second,b,y);
		//cout<<ans<<" "<<res<<'\n';
		if(ans!=-1&&res!=-1)
		mn=min(mn,(res-ans+1));
	}
 cout<<mn;
	return 0;
}
