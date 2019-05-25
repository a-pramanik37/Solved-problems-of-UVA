#include <stdio.h>
int main()
{
    long long T, a, b, c, i;
    scanf("%lld", &T);
    for(i = 1; i <= T; i++){
        scanf("%lld%lld%lld", &a, &b, &c);
        if((a+b) <= c || (b+c) <= a || (c+a) <= b){
            printf("Case %lld: Invalid\n", i);
        }
        else if((a==b)&&(b==c)){
            printf("Case %lld: Equilateral\n", i);
        }
        else if(((a==b) && (a != c)) || ((b==c)&&(b!=a)) || ((c==a)&&(c!=b))){
            printf("Case %lld: Isosceles\n", i);
        }
        else if(((a!=b)&&(b!=c)&&(c!=a)) && ((a+b)>c && (b+c)>a &&(c+a)>b)){
            printf("Case %lld: Scalene\n", i);
        }
    }
    return 0;
}
