///:-)
#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define inf 2000000000
#define sc(n) scanf("%d", &n)
#define Aktaruzzaman using
#define scl(n) scanf("%lld", &n)
#define scd(n) scanf("%lf", &n)
#define pi (2.0*acos(0.0))
#define Pramanik namespace std;
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009
Aktaruzzaman Pramanik
char a[33][33][33];
int vis[33][33][33];

struct dt
{
    int x, y, z;
};

int fx[]={1, -1, 0, 0, 0, 0};
int fy[]={0, 0, 1, -1, 0, 0};
int fz[]={0, 0, 0, 0, 1, -1};

int main()
{
    int l, r, c, i, j, k;

    while(scanf("%d%d%d", &l, &r, &c)==3){

        if(l==0&&r==0&&c==0)break;
        struct dt st, en;
        for(i=1; i<=l; i++){
            for(j=1; j<=r; j++){
                for(k=1; k<=c; k++){
                        cin>>a[i][j][k];
                        if(a[i][j][k]=='S'){
                            st.x=i;
                            st.y=j;
                            st.z=k;
                        }
                        else if(a[i][j][k]=='E'){
                            en.x=i;
                            en.y=j;
                            en.z=k;
                        }
                }
            }
        }

        queue<dt>q;

        mem(vis, -1);

        q.push(st);
        vis[st.x][st.y][st.z]=0;

        while(!q.empty())
        {
            struct dt tmp = q.front();
            q.pop();

            struct dt tt;

            for(int i=0; i<6; i++){
                tt.x = tmp.x+fx[i];
                tt.y = tmp.y+fy[i];
                tt.z = tmp.z+fz[i];
                if(tt.x>=1&&tt.x<=l&&tt.y>=1&&tt.y<=r&&tt.z>=1&&tt.z<=c && vis[tt.x][tt.y][tt.z]==-1&&a[tt.x][tt.y][tt.z]!='#'){
                    vis[tt.x][tt.y][tt.z] = vis[tmp.x][tmp.y][tmp.z]+1;
                    q.push(tt);
                }
            }

        }

        if(vis[en.x][en.y][en.z]==-1)printf("Trapped!\n");
        else printf("Escaped in %d minute(s).\n", vis[en.x][en.y][en.z]);

    }
    return 0;
}
