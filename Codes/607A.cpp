#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,dp[1000010]={0},x,y,m=-1,ans=0;
    int b[1000010]={0};
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
		scanf("%d %d",&x,&y);
		b[x]=y;
    }

    if(b[0]>0) dp[0]=1;

    for(int i=1; i<1000005; i++)
    {
        if(b[i]>0)
        {
			if(b[i]>=i) dp[i]=1;
            else dp[i]=1+dp[i-b[i]-1];
        }
        else dp[i]=dp[i-1];
        ans=max(ans,dp[i]);
    }
    printf("%d",(n-ans));
    return 0;
}
