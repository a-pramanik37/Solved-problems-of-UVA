#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    long n, m, a[30000], b[30000], i, j, k, sum, mi, flg;

    while(scanf("%ld%ld", &n, &m)==2 && n!=0 && m!=0){

        for(i = 0; i<n; i++){
            scanf("%ld", &a[i]);
        }
        for(i = 0; i<m; i++){
            scanf("%ld", &b[i]);
        }

        if(m<n) printf("Loowater is doomed!\n");

        else{
            sort(a, a+n);

            sort(b, b+m);

            sum = 0;
            flg=0;


            for(i = 0; i<n; i++){
                    mi = 99999999999;
                    flg = 0;
                for(j = 0; j<m; j++){
                    if(a[i]==b[j] && b[j]!=-1){
                        mi = b[j];
                        b[j] = -1;
                        break;
                    }
                    else if(a[i]<b[j] && b[j]!=-1){
                        mi = b[j];
                        b[j] = -1;
                        break;
                    }
                    else if(j==m-1 && a[i]>b[j]){
                        flg=1;
                        break;
                    }
                }
                sum =sum+mi;
            }

            if(flg==0) printf("%ld\n", sum);
            else printf("Loowater is doomed!\n");
        }
    }
    return 0;
}
