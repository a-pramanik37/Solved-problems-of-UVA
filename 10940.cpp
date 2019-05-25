#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
int a[500005];
int main()

{
    int i, j, k, p, q, cnt, count, n;



    while(scanf("%d", &n)==1 && n!=0){

            for(i = 1; i<=n; i++) a[i]=i;

        cnt = 1;

        while(1){
            count = 0;
            for(i = 1; i<=n; i++){
                if(a[i]>0 && cnt==1){
                    count++;
        p = a[i];
                    cnt = 0;
                    a[i] = -1;
                }
                else if(a[i]>0 && cnt==0){
                   p = a[i];
                    cnt++;
                    count++;
                }
            }
            if(count<2) break;
        }
        printf("%d\n", p);
    }
    return 0;
}
