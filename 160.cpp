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
int pr[]={2, 3, 5, 7, 11, 13, 17};
int a[105];
int main()

{
        int n, i, j, cnt, p;
        while(scanf("%d", &n)==1 && n!=0){
            mem(a, 0);
            for(i=2; i<=n; i++){
                 p = i;

                for(j=0; pr[j]*pr[j]<=p; j++){
                    if(p%pr[j]==0){
                         cnt = 0;
                        while(p%pr[j]==0 && p>0){
                            cnt++;
                            p/=pr[j];
                        }
                        a[pr[j]]+=cnt;

                    }
                }
                if(p>1)a[p]++;
            }
           printf("%3d! =", n);
           cnt=0;
            for(i=1; i<=100; i++){
                if(a[i]>0){
                        cnt++;
                if(cnt>1 && cnt%15==1)printf("\n      ");
                    printf("%3d",a[i]);
                }
            }
            printf("\n");
        }
        return 0;
}
