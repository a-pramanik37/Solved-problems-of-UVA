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

map<string, int>mp;
string s1, s2;
int par[cf];
int sz[cf];
int find(int u)
{

    if(par[u]==u)return u;
    int s = find(par[u]);
    par[u]=s;
    return s;

}

int main()

{
        int t, n, i, j, x, y;
        scanf("%d", &t);

        while(t--){
                for(i=1; i<=100000; i++){
                        par[i]=i;
                        sz[i]=1;
                }
            scanf("%d", &n);
        int node= 0;
            while(n--){
                cin>>s1>>s2;
                if(mp.count(s1)==0){
                    mp[s1]=++node;

                }
                if(mp.count(s2)==0){
                    mp[s2]=++node;
                }
                x = find(mp[s1]);
                y = find(mp[s2]);
                if(x!=y){
                    par[x]=y;
                     sz[y]=sz[x]+sz[y];
                }

               printf("%d\n", sz[y]);
            }

            /*map<string, int>:: iterator it;
            for(it=mp.begin(); it!=mp.end(); it++){
              cout<<mp[(*it).first]<<" ";
            }
            printf("\n");*/

            mp.clear();
        }
        return 0;
}
