//-_-
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
int a[27][27], b[27][27];
char ch1, ch2;
string s;
/*void rf(int x[27][27], int p)
{
    for(int i=1; i<=p; i++){
        for(int j=1; j<=p; j++){
            if(i==j){
                x[i][j]=0;
                x[j][i]=0;
            }
            else{
                x[i][j]=inf;
            }
        }
    }
}*/

int main()
{
        int t, n, m, i, j, x, y;

        scanf("%d", &t);
        while(t--){
            cin>>n;

            //rf(a, n);

            getchar();
            while(n--){
                getline(cin, s);
                //printf("%d %d\n", s[0]-64, s[2]-64);
                x = s[0]-64;
                y = s[2]-64;
                a[x][y]=1;
            }



            cin>>m;
            getchar();
            //rf(b, m);
            while(m--){
               getline(cin, s);
                b[s[0]-'A'][s[2]-'A']=1;
            }

            for(i=1; i<=n; i++){
                for(j=1; j<=n; j++){
                    printf("%d ",a[i][j]);
                }
                printf("\n");
            }

            //printf("balsal >> %d\n", a[1][5]);

        }
        return 0;
}
