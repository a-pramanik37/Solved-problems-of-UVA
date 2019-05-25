#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t, i, j, a[100], mi, ma, b[100], flg, k;
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
            mi = 200;
    ma = 0;
        for(j=1, k = 1; j<=10; j++, k++){
            scanf("%d", &a[j]);
            b[k]=a[j];
            if(a[j]<mi) mi = a[j];
            if(a[j]>ma) ma = a[j];
        }
        sort(a+1, a+10+1);

        flg = 0;
        if(b[1]==ma){
            for(j = 1, k=10; j<=10, k>=1; j++, k--){
                if(b[j]!=a[k]){
                    flg =1;
                    break;
                }
            }
        }
        else if(b[1]==mi){
                flg =0;
            for(j = 1, k = 1; j<=10; j++, k++){
                if(b[j]!=a[k]){
                    flg =1;
                    break;
                }
            }
        }
        else if(b[1]!=ma && b[1]!=mi) flg = 1;
        if(i==1) printf("Lumberjacks:\n");
        if(flg==0) printf("Ordered\n");
        else printf("Unordered\n");
    }
    return 0;
}
