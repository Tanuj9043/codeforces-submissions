#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
const int N = 1e5+5;
int a[N],dpRight[N],dpLeft[N];


int main()
{
    int n,q,l,r;
    scanf("%d %d",&n,&q);
    for(int i=1; i<=n; i++) scanf("%d",&a[i]);

    dpLeft[1] = 0;
    dpRight[n] = n+1;

    for(int i=2;i<=n;i++)
    {
        if(a[i] <= a[i-1]) dpLeft[i] = dpLeft[i-1];
        else dpLeft[i] = i;
    }
    for(int i=n-1;i>=1;i--)
    {
        if(a[i] <= a[i+1]) dpRight[i] = dpRight[i+1];
        else dpRight[i] = i;
    }

    for(int i=0;i<q;i++)
    {
        scanf("%d %d",&l,&r);
        if(dpRight[l] >= dpLeft[r]) printf("Yes\n");
        else printf("No\n");
    }
}
