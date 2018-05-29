#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int f[100010];
int main()
{
    int n;
    scanf("%d",&n);
    {
        int i,j;
        int ts=1;
        for(ts=1; ts<=n; ts++)
        {
            memset(f,0,sizeof(f));
            char g[100010];
            scanf("%s",g);
            int t=strlen(g);
            for(i=0,j=t-1; g[i]!='\0'; i++,j--)
                f[j]=g[i]-'0';
            int sum;
            while(1)
            {
                sum=0;
                f[0]=f[0]+1;
                for(i=0; i<=t-1;i++)
                {
                    if(f[i]>=10)
                    {
                        f[i]=f[i]%10;
                        f[i+1]=f[i+1]+1;
                    }
                    else break;
                }
                if(f[t]>0)t++;
                for(i=0;i<=t-1;i++)
                    sum=sum+f[i];
                if(sum%10==0)
                {
                    for(i=t-1;i>=0;i--)
                    printf("%d",f[i]);
                    printf("\n");
                    break;
                }
            }
        }
    }
    return 0;
}