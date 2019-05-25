#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
   char a[500];
   int i, j, sum, len, flg;
   while(gets(a)){
        len = strlen(a);
        sum = 0;
        for(i = 0; i <len; i++){
            if(a[i]=='a') sum = sum+1;
            if(a[i]=='b') sum = sum+2;
            if(a[i]=='c') sum = sum+3;
            if(a[i]=='d') sum = sum+4;
            if(a[i]=='e') sum = sum+5;
            if(a[i]=='f') sum = sum+6;
            if(a[i]=='g') sum = sum+7;
             if(a[i]=='h') sum = sum+8;
             if(a[i]=='i') sum = sum+9;
            if(a[i]=='j') sum = sum+10;
            if(a[i]=='k') sum = sum+11;
            if(a[i]=='l') sum = sum+12;
            if(a[i]=='m') sum = sum+13;
            if(a[i]=='n') sum = sum+14;
            if(a[i]=='o') sum = sum+15;
            if(a[i]=='p') sum = sum+16;
            if(a[i]=='q') sum = sum+17;
            if(a[i]=='r') sum = sum+18;
            if(a[i]=='s') sum = sum+19;
            if(a[i]=='t') sum = sum+20;
            if(a[i]=='u') sum = sum+21;
            if(a[i]=='v') sum = sum+22;
            if(a[i]=='w') sum = sum+23;
            if(a[i]=='x') sum = sum+24;
            if(a[i]=='y') sum = sum+25;
            if(a[i]=='z') sum = sum+26;
            if(a[i]=='A') sum = sum+27;
            if(a[i]=='B') sum = sum+28;
            if(a[i]=='C') sum = sum+29;
            if(a[i]=='D') sum = sum+30;
            if(a[i]=='E') sum = sum+31;
            if(a[i]=='F') sum = sum+32;
            if(a[i]=='G') sum = sum+33;
            if(a[i]=='H') sum = sum+34;
            if(a[i]=='I') sum = sum+35;
            if(a[i]=='J') sum = sum+36;
            if(a[i]=='K') sum = sum+37;
            if(a[i]=='L') sum = sum+38;
            if(a[i]=='M') sum = sum+39;
            if(a[i]=='N') sum = sum+40;
            if(a[i]=='O') sum = sum+41;
            if(a[i]=='P') sum = sum+42;
            if(a[i]=='Q') sum = sum+43;
            if(a[i]=='R') sum = sum+44;
            if(a[i]=='S') sum = sum+45;
            if(a[i]=='T') sum = sum+46;
            if(a[i]=='U') sum = sum+47;
            if(a[i]=='V') sum = sum+48;
            if(a[i]=='W') sum = sum+49;
            if(a[i]=='X') sum = sum+50;
            if(a[i]=='Y') sum = sum+51;
            if(a[i]=='Z') sum = sum+52;
        }
        flg = 0;
        for(i = 2; i <=sqrt(sum); i++){
            if(sum%i==0){
                flg = 1;
                break;
            }
        }
        if(flg==1) printf("It is not a prime word.\n");
        else printf("It is a prime word.\n");

   }
   return 0;
}
