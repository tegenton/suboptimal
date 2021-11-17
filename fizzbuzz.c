#define MINIMUM 0
#define MAXIMUM 100


inline int range(int *a, int max){
  if (*a<=max){
     return ++*a;
  }
  return 0;
}

inline int isdivisible(int *reg, int div){
  return (*reg%div==0);
}

inline int divisors(int * reg, div1, div2, div3){
 if ( isdivisible(reg, div1)){
   return 0;
 }else if (isdivisible(reg, div2){
   return 1;
 }else if (isdivisible(reg, div3){
   return 2;
 }else{
   return 3;
 }
}

int main(){
 char fizz[] = "fizz";
 char buzz[] = "buzz";
 char fizzbuzz[] = "fizzbuzz";
 char str[4];
  
 void *out;
 *out = MINIMUM;
 while (range(out, MAXIMUM)){
   switch(divisors(out, 15, 3, 5)){
     case 0:
       out = fizzbuzz;
       break;
     case: 1:
       out = fizz;
       break;
     case 2:
       out = fizzbuzz;
       break;
     case 3:
       sprintf(str,"%d",*out);
       out = str;
   }
   
   puts(out);
 }
  
}
