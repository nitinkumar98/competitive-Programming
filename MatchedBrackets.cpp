#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
int main() {
	fastio();
	ll n,depth=0,depth_pos=0,max_depth=-1,length_pos=0,length=0,max_length=-1;
	cin>>n;
	ll ar[n];
	for(int i=1;i<=n;i++)
	cin>>ar[i];
	for(int i=1;i<=n;i++)
	{
		if(ar[i]==1)
		{
			depth++;
			if(depth>max_depth)
			{
				max_depth=depth;
				depth_pos=i;
				
			}
			
			length++;
			
			
		}
		if(ar[i]==2)
		{
		depth--;
		length++;
		if(depth==0)
		{
			if(length>max_length)
			{
				max_length=length;
				length_pos=i-length+1;
			}
			length=0;
			
			
		}
		}
	}
cout<<max_depth<<" "<<depth_pos<<" "<<max_length<<" "<<length_pos;
	
  
	return 0;
}
