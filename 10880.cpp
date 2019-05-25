#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    long long c, r, i, k, t, p, b[10000], x, j, q, y;


    scanf("%lld", &t);

    for(x = 1; x<=t; x++){
            scanf("%lld%lld", &c, &r);

            q = c-r;

           if(c==r) printf("Case #%d: 0\n", x);

            else{

                j = 0;
                    for(i = 1; i<=sqrt(q); i++){
                        if(q%i==0){


                                b[j]=i;
                            j++;

                            if((q/i)!=i){
                                b[j]=q/i;
                                j++;
                            }

                        }
                    }



                    sort(b, b+j);
                    printf("Case #%d:", x);

                    for(i = 0; i<j; i++){
                       if(b[i]>r) printf(" %d", b[i]);

                    }
                    printf("\n");
                }








    }
    return 0;
}

