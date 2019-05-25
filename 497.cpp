//-_-
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
int dir[cf], vis[cf];
vector<int>a;


int b(char s[]){

    int sum=0, len =strlen(s);
    for(int i=0; i<len; i++){
        sum = sum*10+(s[i]-48);
    }
    return sum;
}

int lis(int u)
{
    if(vis[u]!=-1)return vis[u];
    int maxi = 0;

    for(int v = u+1; v<a.size(); v++){
        if(a[v]>a[u] && lis(v)>maxi){
            maxi = lis(v);
            dir[u]=v;
        }
    }
    vis[u]=1+maxi;
    return vis[u];
}

int main()
{
    int i, j, k, x, st, mx, p, t;
    char s[50];
   scanf("%d", &t);
   int cc = 0;
   while(t--){
        getchar();
   getchar();
        while(cin>>s){
            if(strcmp(s, ""==0))break;
            a.pb(b(s));
        }

        mx=0;
        mem(vis, -1);
        mem(dir, -1);
        for(i=0; i<a.size(); i++){
                if(lis(i)>mx){
                mx=lis(i);
                st=i;
            }
        }
        if(cc!=0)printf("\n");

        printf("Max hits: %d\n", mx);

        while(1){
            printf("%d\n", a[st]);
            if(dir[st]==-1)break;
            st=dir[st];
        }

        a.clear();

        cc++;
    }
    return 0;
}
