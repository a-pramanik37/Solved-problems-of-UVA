#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    int n, m, i, coun, a[50], t, x, bahu,sum;

    scanf("%d", &t);

    for(x = 1; x<=t; x++){

        scanf("%d", &m);
        sum = 0;

        for(i = 1; i<=m; i++){
            scanf("%d", &a[i]);
            sum = sum+a[i];
        }

        if(sum%4!=0) printf("no\n");

        else{
            bahu = sum/4;

            int maxx;
            for(i = 1; i<=m; i++){
                if(a[i]>maxx) maxx= a[i];
            }

            if(maxx>bahu) printf("no\n");

            else{


        int p = 0;
        for(i = 1; i<=m; i++){
            if(a[i]==bahu){
                    a[i]=0;
                    p++;
            }
        }

        int q;


        }

        }

    }

}
