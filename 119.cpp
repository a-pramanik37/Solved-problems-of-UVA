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

    char a[20][100], b[20][100], name[100];

    int i, j, k, rem, n, x, noOFpeole, givenTK, takenTK, p, c=1, arr[200];

    while(scanf("%d", &n)==1){
            memset(arr, 0, sizeof arr);

        for(i = 0; i<n; i++){
            scanf("%s", &a[i]);
        }


        for(p = 0; p<n; p++){

            scanf("%s", &name);



            scanf("%d", &givenTK);

            scanf("%d", &noOFpeole);


            for(j = 0; j<noOFpeole; j++){

                scanf("%s", &b[j]);
            }

            if(givenTK>0){

            if(noOFpeole>0){
                rem = givenTK%noOFpeole;

            takenTK = (givenTK-rem)/noOFpeole;
            }
            if(noOFpeole==0){
                rem = givenTK;
                /*givenTK = 0;*/
            }





            for(j = 0; j<n; j++){
            if(strcmp(name, a[j])==0){
                arr[j] = arr[j]-givenTK;
                arr[j] = arr[j]+rem;
                }
            }


            strcpy(name, "");





            if(noOFpeole>0){
                for(j = 0; j<noOFpeole; j++){
                for(k = 0; k<n; k++){
                    if(strcmp(b[j], a[k])==0){
                        arr[k] = arr[k]+takenTK;
                    }
                }
            }
        }
        }


        }

        if(c!=1) printf("\n");

        for(i = 0; i<n; i++){
            printf("%s %d\n",a[i], arr[i]);

        }


        c++;
    }

    return 0;
}
