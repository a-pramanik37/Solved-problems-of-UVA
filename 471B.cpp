#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define mem(a, b) memset(a, b, sizeof a)
#define P printf
#define V(a) vector<ll>a
#define pb push_back
int bb[2005];
struct dt
{
    int v, in;
}a[2005];

bool bp(dt lhs, dt rhs){
        if(lhs.v<rhs.v)return true;
        else return false;
}

int main()

{
    vector<int>cc;
    int n, i, j, k, p, q, x, y,i1, i2, i3,kk;

    while(scanf("%d", &n)==1){
            mem(bb, 0);
        for(i = 1; i<=n; i++){
        scanf("%d", &a[i].v);
    bb[a[i].v]++;
        a[i].in = i;
        }
        int cnt = 0;
        int flg=0;
        for(i=1; i<=2000; i++){
            if(bb[i]>1){
                cc.pb(i);
                cnt++;
                if(cnt==2){
                    flg=1;
                    break;
                }
            }
        }

        if(flg==1){

            i1 = cc[0];
            i2 = cc[1];
            sort(a+1, a+n+1, bp);
            printf("YES\n");
            for(i=1; i<=n; i++){
               printf("%d ",a[i].in);
            }
            printf("\n");
            kk=0;
            for(i = 1; i<=n; i++){
                if(a[i].v==i1 && kk==0){
                        kk++;
                    swap(a[i].in, a[i+1].in);
                }
                printf("%d ",a[i].in);
            }
            printf("\n");
            kk=0;
            for(i = 1; i<=n; i++){
                if(a[i].v==i2 && kk==0){
                        kk++;
                    swap(a[i].in, a[i+1].in);
                }
                printf("%d ",a[i].in);
            }
            printf("\n");

        }

        else{
            flg=0;
            for(i = 1; i<=2000; i++){
                if(bb[i]>2){
                    flg=1;
                    i1=i;
                    break;
                }
            }

            if(flg==0)printf("NO\n");

            else{

                sort(a+1, a+n+1, bp);
                printf("YES\n");

                for(i=1; i<=n; i++){
                    printf("%d ",a[i].in);
                }
                printf("\n");

                 kk=0;
                for(i=1; i<=n; i++){
                    if(a[i].v==i1 && kk==0){
                        kk++;
                        swap(a[i].in, a[i+1].in);
                    }
                    printf("%d ",a[i].in);
                }
                printf("\n");

                kk=0;
                for(i = 1; i<=n; i++){
                    if(a[i].v==i1 && kk==0){
                            kk++;
                            swap(a[i].in, a[i+2].in);

                    }
                    printf("%d ",a[i].in);
                }
                printf("\n");

            }

        }

        /*for(i = 1; i<=n; i++)printf("%d ",a[i].v);
        printf("\n");
        for(i = 1; i<=n; i++)printf("%d ",a[i].in);
        printf("\n");*/

    }
    return 0;
}
