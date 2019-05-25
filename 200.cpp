#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{

    int i, j, k, main[26], temp[26], coun, c[26];

    char a[1000], b[1000];
    memset(main, 0, sizeof main);


    while(1){

        scanf("%s", a);

        if(strcmp(a, "#")==0){
            j = 0;
            for(i = 0; i<26; i++){
                if(main[i]>0){
                    b[j] = i+'A';
                    c[j] = main[i];
                    j++;
                }
            }
            b[j] = '\0';


            for(i = 0; i<strlen(b)-1; i++){
                for(j = i+1; j<strlen(b); j++){
                    if(c[i]<c[j]){
                        swap(b[i], b[j]);
                        swap(c[i], c[j]);
                    }

                    else if(c[i]==c[j]){
                        if(b[i]<b[j]){
                            swap(b[i], b[j]);
                        }
                    }
                }
            }

            printf("%s\n", b);

            break;

        }

        else{
                memset(temp, 0, sizeof temp);
            for(i = 0; i<strlen(a); i++){
                temp[a[i]-'A'] = 1;
            }
            for(i = 0; i<26; i++){
                if(temp[i]==1) main[i]++;
            }
        }

    }
    return 0;
}
