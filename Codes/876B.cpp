#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m;
    int arr[100005],dm[100005]={0},mx=-1;
    int ansIndex=-1;
    scanf("%d %d %d",&n,&k,&m);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        dm[arr[i]%m]++;
        if(dm[arr[i]%m]>mx)
        {
            mx=dm[arr[i]%m];
            ansIndex=arr[i]%m;
        }
    }
    if(dm[ansIndex]<k) printf("No");
    else
    {
        printf("Yes\n");
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%m==ansIndex)
            {
                printf("%d ",arr[i]);
                cnt++;
            }
            if(cnt==k) break;
        }
    }
    return 0;
}
