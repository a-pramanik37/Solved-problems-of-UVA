#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define inf 20000000
#define pi (2.0*acos(0.0))
#define vsort(v)   sort(v.begin(),v.end())
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define cf 100009

int a[105][105];
int mark[105];
set<int>s;
int main()

{
    /*int a = 2, b = 3, c = 3;
    double d = (double(a)+double(b)+double(c))/3.0;
    printf("%lf\n",d);*/
        int n, m, i, j, k, x, y, cst, cc=0;
        double  sum, vag;
        while(scanf("%d%d", &x, &y)==2){
                n=0;
                mem(mark, 0);
                mem(a, 0);
                if(x==0 && y==0)break;
                s.insert(x);
                s.insert(y);
                mark[x]++;
                mark[y]++;
            a[x][y]=1;

        n = max(x, n);
        n = max(n, y);

        while(scanf("%d%d", &x, &y)==2 && x!=0 && y!=0){
                s.insert(x);
                s.insert(y);
            a[x][y]=1;
            mark[x]++;
            mark[y]++;
            n = max(x, n);
        n = max(n, y);
        }
        //printf("%d\n", n);

            for(i=1; i<=n; i++){
                for(j=1; j<=n; j++){
                        if(i==j){
                            a[i][j]=0;
                            a[j][i]=0;
                        }

                        else if(a[i][j]==0){
                            a[i][j]=inf;
                        }
                }
            }





            for(k=1; k<=n; k++){
                for(i=1; i<=n; i++){
                        for(j=1; j<=n; j++){
                            a[i][j]=min(a[i][j], a[i][k]+a[k][j]);
                        }
                }
            }

            /*for(i=1; i<=n; i++){
                for(j=1; j<=n; j++){
                    printf("%d ",a[i][j]);
                }
                printf("\n");
            }*/


            sum = 0;

            for(i=1; i<=n; i++){
                for(j=1; j<=n; j++){
                   if(mark[i]>0 && mark[j]>0){
                    sum+=double(a[i][j]);
                   }
                }
            }
            vag = double(s.size());
            s.clear();
            sum = sum/(vag*vag-vag);

            printf("Case %d: average length between pages = %.3lf clicks\n",++cc, sum);
        }
        return 0;
}

