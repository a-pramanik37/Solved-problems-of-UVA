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
int a[15];
int ck(int x){
    int cnt=0;

    while(x>0){
        a[x%10]++;
        x/=10;
        cnt++;
    }
    return cnt;

}

int main()
{
    int n, i, j, k, x, y, cc=0, B, b, flg, ff;
    while(scanf("%d", &n)==1 && n!=0){
        if(cc!=0)printf("\n");
                        ff=0;
        for(i=1234; i<=(98770/n); i++){
            x = i;
            y = i*n;
            mem(a, 0);
            b=ck(x);
            B=ck(y);
            flg=0;
            for(j=1; j<=9; j++){
                if(a[j]!=1){
                    flg=1;
                    break;
                }
            }

            if(flg==0 && a[0]==1 && b==5 && B==5){
                ff=1;
                printf("%0.5d / %0.5d = %d\n",y, x, n);
            }
            else if(flg==0 && (a[0]==0 && b==4 && B==5)){
                ff=1;
                printf("%0.5d / %0.5d = %d\n",y, x, n);
            }
            else if(flg==0 && a[0]==0 && B==4 && b==5){
                ff=1;
                printf("%0.5d / %0.5d = %d\n",y, x, n);
            }

        }
        if(ff==0)printf("There are no solutions for %d.\n",n);
        cc++;
    }
    return 0;
}
