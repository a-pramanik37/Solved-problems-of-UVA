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
int a[cf];
int main()
{
    int n, m, i, j, k, cc=0, ans, mn, x, y;

    while(scanf("%d", &n)==1 && n!=0){

        for(i=1; i<=n; i++){
            scanf("%d", &a[i]);
        }

        sort(a+1, a+1+n);

        scanf("%d", &m);
        printf("Case %d:\n", ++cc);
        while(m--){
            cin>>k;
            mn=inf;
            for(i=1; i<=n; i++){
                for(j=i+1; j<=n; j++){
                    x=a[i]+a[j];
                    y = abs(k-x);
                    if(y<mn){
                        mn=y;
                        ans=x;
                    }
                    if(x>k)break;
                }
            }
            printf("Closest sum to %d is %d.\n", k, ans);
        }

    }
    return 0;
}
