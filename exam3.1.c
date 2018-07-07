#include <stdio.h>

//char hex = {0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F};

int hex_to_dec(){
    int decimal = 0;
    scanf("%x", &decimal);
    return decimal;
}


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
   calculate_5(hex_to_dec())
   return 0;
}
