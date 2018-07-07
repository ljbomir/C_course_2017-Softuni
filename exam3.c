#include <stdio.h>

int calculate_5(int x)
{
       int result = 0;
       int index = 1;
           while (x != 0){
               int rem = x % 5;
               x /= 5;
               result += index * rem;
               index *= 10;
           }
   return result;
}


main (){
   int input;
   scanf("%x", &input);
   printf("%d", calculate_5(input));
  return 0;
}
