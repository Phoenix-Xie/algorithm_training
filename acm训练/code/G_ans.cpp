    #include<iostream>  
    #include<cstdio>  
    #include<cstring>  
    using namespace std;  
      
    int s[50005],n;  
      
    int lowbit(int x){  
        return x&(-x);  
    }  
      
    int sum(int x){  
        int ans=0;  
        for(int i=x;i>0;i-=lowbit(i))  
        ans+=s[i];  
        return ans;  
    }  
      
    void modify(int x,int data){  
        for(int i=x;i<=n;i+=lowbit(i))  
        s[i]+=data;  
    }  
      
    int main(){  
        int t,a,b;  
        char c[20];  
        scanf("%d",&t);  
        for(int i=0;i<t;++i){  
            printf("Case %d:\n",i+1);  
            scanf("%d",&n);  
            memset(s,0,sizeof(s));  
            for(int j=1;j<=n;++j){  
                scanf("%d",&a);  
                modify(j,a);  
            }  
            while(scanf("%s",c)&&c[0]!='E'){  
                if(c[0]=='Q'){  
                    scanf("%d%d",&a,&b);  
                    printf("%d\n",sum(b)-sum(a-1));  
                }  
                else if(c[0]=='A'){  
                    scanf("%d%d",&a,&b);  
                    modify(a,b);  
                }  
                else{  
                    scanf("%d%d",&a,&b);  
                    modify(a,-b);  
                }  
            }  
        }  
        return 0;  
    }  