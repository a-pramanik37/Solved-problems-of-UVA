#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int i, j, val, sum, k, t, coun, z,b, x, a[1000007];

int dsum(int n)
{
    sum = 0;
     while(x>0){
                    sum=sum+x%10;
                    x= x/10;
                }
    return sum;
}


int main()

{

    for(i = 1; i<=1000001; i++){
        a[i] = i;
    }
    a[1] = 1;

    x = sqrt(1000001);

    for(i = 2; i<=x; i++){
        if(a[i]!=1){
            for(j = i*2; i<=1000001; j=j+i){
                if(a[j]!=1) a[j]=1;
            }
        }
    }




     scanf("%d", &t);

    for(i =1; i<=t; i++){

        scanf("%d%d", &z, &b);

        coun = 0;

        for(j = z; j<=b; j++){
            x = j;
            if(j%2!=0 && a[j]==0 && a[dsum(x)]==0) coun++;
        }

        printf("%d\n", coun);

    }
    return 0;

}





