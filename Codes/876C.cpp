#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int x)
{
    int s=0;
    while(x!=0)
    {
        s+=x%10;
        x/=10;
    }
    return s;
}

int main()
{
    int n,k=0;
    vector<int> v;
    scanf("%d",&n);
    if(n<81)
    {
        for(int i=1; i<n; i++)
        {
            int x=i+sumOfDigits(i);
            if(x==n)
            {
                v.push_back(i);
                k++;
            }
        }
    }
    else
    {
        for(int i=n-81; i<n; i++)
        {
            int x=i+sumOfDigits(i);
            if(x==n)
            {
                v.push_back(i);
                k++;
            }
        }
    }
    printf("%d\n",k);
    if(k>0)
    {
        for(int i=0; i<v.size(); i++) printf("%d ",v[i]);
    }
    return 0;
}
