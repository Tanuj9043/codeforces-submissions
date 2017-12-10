#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[200010],b[200010];
    int one[200010]={0},zero[200010]={0},la,lb;
    long long ans=0;
    cin >> a >> b;
    la=strlen(a);lb=strlen(b);
    for(int i=1; b[i-1]!='\0'; i++)
    {
		if(b[i-1]=='0')
		{
			zero[i] = zero[i-1]+1;
			one[i] = one[i-1];
		}
		else
		{
			one[i] = one[i-1]+1;
			zero[i] = zero[i-1];
		}
    }
    for(int i=1; a[i-1]!='\0'; i++)
    {
		int x=lb-(la-i);
		if(a[i-1]=='0')
		{
			ans+=one[x]-one[i-1];
		}
		else
		{
			ans+=zero[x]-zero[i-1];
		}
    }
    printf("%lld",ans);
    return 0;
}
