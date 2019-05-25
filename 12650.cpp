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
int a[10005];
int main()
{
    int n, r, i, j ,k, cnt;
    while(scanf("%d%d", &n, &r)==2){

        mem(a, 0);
        cnt = 0;
        for(i=1; i<=r; i++){
            scanf("%d", &k);
            if(a[k]==0)cnt++;
            a[k]++;
        }

        if(cnt==n)printf("*\n");

        else{

            for(i=1; i<=n; i++){
                if(a[i]==0)printf("%d ",i);
            }
            printf("\n");

        }

    }
    return 0;
}
