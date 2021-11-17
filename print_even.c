#define MINIMUM 0
#define MAXIMUM 100

inline int range(int *a, int max){
  if (*a<=max){
     return ++a;
  }
  return 0;
}

inline int iseven(int val){
  return !(val%2)
}

int main(void){
 int val = MINIMUM;
 while (range(&val, MAXIMUM)){
   if (iseven(val)){
     printf("%d\n", val);
   }
 }
}
