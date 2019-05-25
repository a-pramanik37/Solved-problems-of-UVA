#include<set>
#include<list>
#include<map>
#include<stack>
#include<string>
#include<cstdio>
#include<cmath>
#include<queue>
#include<vector>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<iterator>
#include<fstream>
#include<sstream>
#include<numeric>
#include<iostream>
#include<algorithm>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 2000000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define ff(i,a,n) for(int i=a;i<=n;i++)
#define mem(a, b) memset(a, b, sizeof a)

int i, j,n, m, p, q, x, y,cnt, t;

vector<int>a[40];
int vis[40];
char s[10];

void dfs(int u){

   vis[u] = 1;

   for(int k=0; k<a[u].size(); k++){
        y = a[u][k];
        if(vis[y]==0){
            dfs(y);
        }
   }

}

int main()

{
        scanf("%d", &t);

        getchar();
        getchar();

        for(int f=1; f<=t; f++){

            scanf("%s", s);
            n = s[0]-65;
            getchar();

            while(gets(s)){
                if(s[0]=='\0')break;

                x = s[0]-65;
                y = s[1]-65;
                a[x].pb(y);
                a[y].pb(x);

            }

            cnt = 0;
            mem(vis, 0);
            for(i=0; i<=n; i++){
                if(vis[i]==0){

                    if(a[i].size()==0){
                        cnt++;
                        vis[i]=1;
                    }
                    else{
                        cnt++;
                        dfs(i);
                    }

                }
            }

            if(f!=1)printf("\n");

            printf("%d\n", cnt);

            for(i=0; i<=n; i++)a[i].clear();

        }
        return 0;
}
