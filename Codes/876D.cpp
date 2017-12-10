#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[300005],b[300005]={0},ans=1;
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d",&arr[i]);
    printf("%d ",ans);
    for(int i=0; i<n; i++)
    {
        if(arr[i]==n)
        {
            b[n]=2;
            int j=n-1;
            while(b[j]==1)
            {
                b[j--]=2;
                ans--;
            }
        }
        else
        {
            if(b[arr[i]+1]==2)
            {
                b[arr[i]]=2;
                int j=arr[i]-1;
                while(b[j]==1)
                {
                    b[j--]=2;
                    ans--;
                }
            }
            else
            {
                b[arr[i]]=1;
                ans++;
            }
        }
        printf("%d ",ans);
    }
    return 0;
}
