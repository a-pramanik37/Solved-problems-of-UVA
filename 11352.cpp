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
typedef pair<int, int>pii;
int fx[]={-2, -1, 1, 2, 2, 1, -1, -2};
int fy[]={1, 2, 2, 1, -1, -2, -2, -1};
int gx[]={-1,-1,-1, 0, 1, 1, 1, 0};
int gy[]={-1, 0, 1, 1, 1, 0, -1, -1};
int vis[1000][1000];
queue<pii>q;

int n, m,i, j, k,t, p1, q1, p2, q2;
char a[1000][1000];

int main()

{

        scanf("%d", &t);

        while(t--){
            scanf("%d%d", &n,&m);

            for(i=0; i<n; i++){
                for(j=0; j<m; j++){
                    cin>>a[i][j];
                    vis[i][j]=-1;
                    if(a[i][j]=='A'){
                        p1 = i;
                        q1 = j;
                    }
                    else if(a[i][j]=='B'){
                        p2 = i;
                        q2 = j;
                    }
                }
            }
            /*printf("A >>>> %d %d\n", p1, q1);
            printf("B >>>> %d %d\n", p2, q2);*/
            for(i=0; i<n; i++){
                for(j=0; j<m; j++){
                    if(a[i][j]=='Z'){
                       for(k=0; k<8; k++){
                            int tx = i+fx[k];
                            int ty = j+fy[k];
                            if(tx>=0&&tx<n&&ty>=0&&ty<m&&a[tx][ty]=='.'){
                                a[tx][ty]='#';
                            }
                       }
                    }
                }
            }


            /*for(i=0; i<n; i++){
                for(j=0; j<m; j++)printf("%c",a[i][j]);
                printf("\n");
            }*/



           vis[p1][q1]=0;
           q.push(pii(p1, q1));

           while(!q.empty()){

            int px = q.front().first;
            int py = q.front().second;
            q.pop();

            for(i=0; i<8; i++){
                int tx = px+gx[i];
                int ty = py+gy[i];
                if(tx>=0&& tx<n&&ty>=0&&ty<n&&vis[tx][ty]==-1&&(a[tx][ty]=='.'||a[tx][ty]=='B')){
                    vis[tx][ty]=vis[px][py]+1;
                    q.push(pii(tx, ty));
                }
            }

           }
           //printf("%d\n", vis[p2][q2]);
           if(vis[p2][q2]==-1)printf("King Peter, you can’t go now!\n");
           else printf("Minimal possible length of a trip is %d\n", vis[p2][q2]);
        }
        return 0;
}
