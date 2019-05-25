#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[50], oldest[50], youngest[50];
    int n, i, kom[3]={0, 0, 1}, b[3]={0, 0, 5000}, d, m, y;

    scanf("%d", &n);
    for(i =1; i<=n; i++){
        scanf("%s", &a);
        scanf("%d%d%d", &d, &m, &y);
        if(kom[2]<=y){
            if(kom[2]==y){
                if(kom[1]<=m){
                    if(kom[1]==m){
                        if(kom[0]<d){
                            kom[0]=d;
            kom[1]=m;
            kom[2]=y;
            strcpy(oldest, a);
                        }
                    }
                    else{
                        kom[0]=d;
            kom[1]=m;
            kom[2]=y;
            strcpy(oldest, a);
                    }
                }

            }
            else{
                kom[0]=d;
            kom[1]=m;
            kom[2]=y;
            strcpy(oldest, a);
            }
        }



    if(b[2]>=y){
            if(b[2]==y){
                if(b[1]>=m){
                    if(b[1]==m){
                        if(b[0]>d){
                            b[0]=d;
            b[1]=m;
            b[2]=y;
            strcpy(youngest, a);
                        }
                    }
                    else{
                        b[0]=d;
            b[1]=m;
            b[2]=y;
            strcpy(youngest, a);
                    }
                }

            }
            else{
                b[0]=d;
            b[1]=m;
            b[2]=y;
            strcpy(youngest, a);
            }
        }



    }
    printf("%s\n",oldest);
    printf("%s\n", youngest);
  return 0;
}
