#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main()

{
    char a[10003];

    int i, j,k;
    while(gets(a)){

        for(i = 0; i<strlen(a); i++){

           if(a[i]>=65 && a[i]<=90) a[i] = a[i]+32;


        }

        for(i= 0; i<strlen(a); i++){

            if(a[i]=='e') printf("q");

            else if(a[i]=='r') printf("w");
            else if(a[i]=='t') printf("e");
            else if(a[i]=='y') printf("r");
            else if(a[i]=='u') printf("t");
            else if(a[i]=='i') printf("y");
            else if(a[i]=='o') printf("u");
            else if(a[i]=='p') printf("i");
            else if(a[i]=='[') printf("o");
            else if(a[i]==']') printf("p");

            else if(a[i]=='d') printf("a");
            else if(a[i]=='f') printf("s");
            else if(a[i]=='g') printf("d");
            else if(a[i]=='h') printf("f");
            else if(a[i]=='j') printf("g");
            else if(a[i]=='k') printf("h");
            else if(a[i]=='l') printf("j");
            else if(a[i]==';') printf("k");
            else if(a[i]=='\'') printf("l");
            else if(a[i]=='\\') printf(";");


            else if(a[i]=='c') printf("z");
            else if(a[i]=='v') printf("x");
            else if(a[i]=='b') printf("c");
            else if(a[i]=='n') printf("v");
            else if(a[i]=='m') printf("b");
            else if(a[i]==',') printf("n");
            else if(a[i]=='.') printf("m");
            else if(a[i]=='/') printf(",");

            else printf("%c", a[i]);


        }
        printf("\n");
    }
    return 0;
}
