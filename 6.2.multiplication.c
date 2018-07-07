#include <stdio.h>

int mult2(int number)
{
    return number << 1; //multiplication by 2
} 

int mult4(int number) 
{
    int a,b;
    a = number << 1; //multiplication by 2
    b = a << 1;      //second multiplication by 2 will give us pow(2, 2)
    
    return number=b;
}

int mult8(int number) 
{
    int a,b,c;  // 3 times multiplication by 2 will give us pow(2, 3)
    a = number << 1;
    b = a << 1;
    c = b << 1 ;
    return number = c;
}

int mult16(int number)
{   
    int x = 4; // from 4 to 0 we will do it 4 times
    while (x !=0 ){
        number <<= 1; // we multiply 4 times by 2 = pow(2, 4) 
        x--;
        }
    return number;
}

int main(){
    int number = 0;
    printf("Enter your number: ");
    scanf("%d", &number);
    printf("Multiplication of %d by \n 2 is %d\n 4 is %d\n 8 is %d\n 16 is %d\n",
    number,
    mult2(number),
    mult4(number),
    mult8(number),
    mult16(number)
    );
    
}
