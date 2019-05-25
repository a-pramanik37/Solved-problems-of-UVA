#include <stdio.h>
#include <string.h>
int main()
{
   char a[500], b[500], c[500];
   int i, j, k, len, len1;
   while(gets(a)){



   if(a[0]==68 && a[1]==79 && a[2]==78 && a[3]==69 && a[4]=='\0'){
        break;
   }
   len = strlen(a);
    for(i = 0; i < len; i++){
           if(a[i]>=65 && a[i]<=90){
                a[i] = 'a'+(a[i]-'A');
           }
        }


    for(i = 0, j=0; i <len;i++){
        if(a[i]!=46 && a[i]!=44 && a[i]!=33 && a[i]!=63 && a[i]!=32){
                b[j]=a[i];
        j++;
    }
   }
   b[j] = '\0';

   len1 = strlen(b);

   for(j = len1-1,k=0; j>=0; j--, k++){
        c[k]=b[j];
   }
   c[k]='\0';
   int flg = 0;
    for(i = 0; i <len1; i++){
        if(b[i]!=' ' && b[i]!=c[i]){
            flg = 1;
            break;
        }
    }
    if(flg==0)  printf("You won't be eaten!\n");
    else printf("Uh oh..\n");


    }

   return 0;
}
