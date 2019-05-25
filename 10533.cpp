#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
int a[1000005];
int b[1000005];
int main()
{
    int i, j, k, n, cnt, sum, x, y, t, p, q, c;
    a[1] =1;
    a[0]=1;

    for(i = 2; i<=1000001; i++){
        if(a[i]==0){

            for(j = i*2; j<=1000001; j = j+i){
                a[j] = 1;
            }
        }
    }
    c = 0;
    for(i = 1; i<=1000001; i++){
            k = i;
        if(a[i]==0){
            j = i;

            sum = 0;
            while(j>0){
                sum+=(j%10);
                j/=10;
            }
            if(a[sum]==0 || a[sum]==2) {
                    a[k]=2;
                    c++;
            }
        }
    b[k] = c;
    }


    scanf("%d", &t);

    for(i = 1; i<=t; i++){
        scanf("%d%d", &x, &y);

        if(x>y)swap(x, y);

        if(a[x]==2) cnt = b[y]-b[x]+1;

        else cnt = (b[y]-b[x]);
        printf("%d\n", cnt);
    }

    return 0;
}
