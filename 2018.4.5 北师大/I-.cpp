#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,i,x=0,s;
    scanf("%lld",&t);
    while(t--)
    {

        x=0;long long int l=0,k,sum=0;
        scanf("%lld %lld",&n,&s);
        char a[1000010]; memset(a,0,sizeof(a));

            getchar();
            scanf("%s",a);
        for(i=0;i<n;i++)
            if(a[i]=='M')
                x++;
        
        k=n-x;
        if(x*k<s)
            printf("-1\n");
        else
            {
                for(i=n-1;i>=0;i--)
                {
                    if(a[i]=='M')
                        sum+=k;
                    else
                        k--;
                }
                if(sum>s)
                   printf("%lld\n",sum-s);
                else
                     printf("%lld\n",s-sum);

            }


    }
    return 0;
}