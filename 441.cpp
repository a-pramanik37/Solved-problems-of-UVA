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
int a[100];
int main()
{
    int n, i, j, k, l, m, o, p;
    int cc = 0;
    while(scanf("%d", &n)==1 && n!=0){

        for(i=1; i<=n; i++)scanf("%d", &a[i]);

        if(cc!=0)printf("\n");
        cc++;
        for(i=1; i<=n-5; i++){
            for(j=i+1; j<=n-4; j++){
                for(k=j+1; k<=n-3; k++){
                    for(l=k+1; l<=n-2; l++){
                        for(m=l+1; m<=n-1; m++){
                            for(o=m+1; o<=n; o++){
                                printf("%d %d %d %d %d %d\n", a[i], a[j], a[k], a[l], a[m], a[o]);
                            }
                        }
                    }
                }
            }
        }

    }
    return 0;
}
