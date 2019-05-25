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

    long int n, i, j, coun, ans, p, c, x;

    while(scanf("%ld", &n)==1 && n!=0){
        coun = 0;
        c = 0;
        p = sqrt(n);
        for(i = 1; i<=p; i++){
            if(n%i==0 ){
                coun++;
                if((n/i)%i!=0) c++;
            }

        }

        x = c*2;


       if(coun==1) printf("%ld 1\n", n);

       else if(p*p==n) printf("%ld %ld\n", n, (coun*2)-1);

       else printf("%ld %ld\n", n, (coun*2)-1+c*2);


    }
    return 0;

}
