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
int par[cf];

int find(int u)
{
    if(par[u]==u)return u;
    int s = find(par[u]);
    par[u]=s;
    return s;
}
string s;
int main()

{
        int t, n, i, j,x, y, sccs, nsccs, p, q;
        char sp;
        scanf("%d", &t);
        int flg=0;
        scanf("\n");
        while(t--){
            scanf("%d", &n);
            for(i=1; i<=n; i++)par[i]=i;
            sccs=0;
            nsccs=0;
            getchar();
            //getchar();
            while(1){

            getline(cin, s);
            if(s.empty())break;
            sp = s[0];
            x=0, y=0;

            for(i=2; ; i++){
                if(s[i]==' ')break;
                else x =x*10+s[i]-48;
            }
            for(j=i+1; ; j++){
                if(j==s.size())break;
                else y = y*10+s[j]-48;
            }


            //cout<<sp<<" "<<x<<" "<<y<<endl;
                if(sp=='c'){
                    p = find(x);
                    q = find(y);
                    if(p!=q)par[p]=q;
                }

                else{
                    p = find(x);
                    q = find(y);
                    if(p!=q)nsccs++;
                    else sccs++;
                }

            }

            if(flg==1)printf("\n");
            flg=1;
            printf("%d,%d\n", sccs, nsccs);
        }
        return 0;
}
