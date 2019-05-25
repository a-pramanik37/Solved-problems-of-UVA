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
int a[10000], b[10000];

int main()
{


    int cnt,i, j, k, N, y, n;

    while(scanf("%d", &n)==1){
            cnt=0;
        for(i=n+1; i<=n*2; i++){
            k = (n*i)/(i-n);
            //printf("%d\n", k);
            if(n*i==((i-n)*k)){
                    cnt++;
                    a[cnt]=k;
                    b[cnt]=i;
            }

        }
        printf("%d\n", cnt);
        for(i=1; i<=cnt; i++){
            printf("1/%d = 1/%d + 1/%d\n", n, a[i], b[i]);
        }
    }
    return 0;
}
