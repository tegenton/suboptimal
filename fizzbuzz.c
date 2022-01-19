#include <stdio.h>
#define MINIMUM 0
#define MAXIMUM 100


static inline int range(int *a, int max){
  return ++*a<=max;
}

static inline int isdivisible(int *reg, int div){
  return (*reg%div==0);
}

static inline int divisors(int * reg, int div1, int div2, int div3){
 if ( isdivisible(reg, div1)){
   return 0;
 }
 if (isdivisible(reg, div2)){
   return 1;
 }
 if (isdivisible(reg, div3)){
   return 2;
 }
 return 3;
}

int main(){
 char fizz[] = "fizz";
 char buzz[] = "buzz";
 char fizzbuzz[] = "fizzbuzz";
 char str[4];
 int res;
  
 res = MINIMUM;
 void * out = &res;
 while (range(out, MAXIMUM)){
   switch(divisors(out, 15, 3, 5)){
     case 0:
       out = fizzbuzz;
       break;
     case 1:
       out = fizz;
       break;
     case 2:
       out = fizzbuzz;
       break;
     case 3:
       sprintf(str,"%d",*(int *)out);
       out = str;
   }
   
   puts(out);
   out = &res;
 }
  
}
