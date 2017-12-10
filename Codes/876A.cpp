#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c,ans=0;
    scanf("%d %d %d %d",&n,&a,&b,&c);
    if(a<=b)
    {
        if(c<=a)
        {
            if(n==1) ans=0;
            else if(n>=2) ans = a+((n-2)*c);
        }
        else ans = a*(n-1);
    }
    else
    {
        if(c<=b)
        {
            if(n==1) ans=0;
            else if(n>=2) ans = b+((n-2)*c);
        }
        else ans = b*(n-1);
    }
    printf("%d",ans);
    return 0;
}
