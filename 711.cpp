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

int a[7][120005],b[10] ;

int dp(int pos, int koybar, int feas){

        if(pos>6)return 0;

        if(a[pos][feas]!=0)return a[pos][feas];

        int xx=0, yy=0;

        if(pos<=feas && b[pos]>=koybar){

            xx=pos+dp(pos, koybar+1, feas-pos);
        }
        yy=dp(pos+1, 1, feas);
        a[pos][feas]+=max(xx, yy);
        return a[pos][feas];

}

int main()
{
    int i, j, k;
    int cc=0;
    while(scanf("%d%d%d%d%d%d", &b[1], &b[2], &b[3], &b[4], &b[5], &b[6])==6){
            if(b[1]==0 && b[2]==0 && b[3]==0 && b[4]==0 && b[5]==0 && b[6]==0)break;

            int sum = 0;
            for(i=1; i<=6; i++){
                sum+=b[i]*i;
            }
            //printf("%d\n", sum);
            printf("Collection #%d:\n",++cc);

            if(sum%2==1)printf("Can't be divided.\n");

            else{
            int half=sum/2;

            int x = dp(1, 1, half);
            cout<<"x  "<<x<<endl;
           //printf("Half>> %d\nPaisi>> %d\n", half, x);
           if(half!=x)printf("Can't be divided.\n");
           else printf("Can be divided.\n");
            }
            mem(a, 0);
            printf("\n");
    }
    return 0;
}

