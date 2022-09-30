#include <stdio.h>

long plus(long x, long y);
void sumstore(long x, long y, long *dest);

int main(int argc, char *argv){
   long x=5;
   long y=20;
   long result;

   sumstore(x,y,&result);
   printf("%ld + %ld = %ld\n",x,y,result);
   return 0;
}

void sumstore(long x, long y, long *dest){
   long t = plus(x,y);
   *dest = t;
}

long plus(long x, long y){
   return x + y;
}
