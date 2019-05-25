#include <bits/stdc++.h>

using namespace std;
int main()
{
   int n, i, a[5000], b[5000], j, flg;
   while(scanf("%d", &n)==1){
    for(i=0; i <n; i++){
        scanf("%d", &a[i]);
    }

    flg = 0;
    for(i = 1, j=0; i<n; i++, j++){
            if(abs(a[i]-a[i-1])>n){
                flg = 1;
                break;
            }
        b[j]=abs(a[i]-a[i-1]);
    }
    if(flg==0){
    sort(b, b+n);
    //flg= 0;
    for(i = 0; i<(n-2); i++){
        if(b[i]==b[i+1]){
            flg=1;
            break;
        }
    }
    if(flg==1) printf("Not jolly\n");
    else printf("Jolly\n");
    }
    else printf("Not jolly\n");
   }
   return 0;
}
