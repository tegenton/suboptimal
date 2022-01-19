#include <stdio.h>
#define MINIMUM 0
#define MAXIMUM 100

static inline int range(int *a, int max){
    return (*a)++<=max;
}

static inline int iseven(int *val){
  return !(*val%2);
}

int main(void){
 int reg;
 void * val = &reg;
 *(int*)val = MINIMUM-1;
 while (range(val, MAXIMUM)){
   if (iseven(val)){
     printf("%d\n", *(int *)val);
   }
 }
}
