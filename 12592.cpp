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

   char a[45][100], b[200];


   int i, j, n, q;


   while(scanf("%d ", &n)==1){

    for(i=1; i<=(n*2); i++){
        gets(a[i]);
    }



    scanf("%d ", &q);

    for(i = 1; i<=q; i++){
        gets(b);
        for(j = 1; j<=(n*2); j++){
            if(strcmp(b, a[j])==0){
                puts(a[j+1]);
            }

        }

    }

   }
   return 0;
}
