#include <stdio.h>

int inputNumber;

void decToHex(int x)
{
    if (x == 0)printf("0"); // this handles if user has entered 0
    int index = 0;
    while (x != 0){
        int reminder = x % 16;
        x /= 16;
        if (reminder > 9){
            switch(reminder){
                case 10: printf("A"); break;
                case 11: printf("B"); break;
                case 12: printf("C"); break;
                case 13: printf("D"); break;
                case 14: printf("E"); break;
                case 15: printf("F"); break;
                default: printf("ERROR"); break; 
            }
        }else
            {
                printf("%d", (x / 16));
            }
        index ++;     
    }
}

void decToOctal(int x)
{   
    int result = 0;
    int index = 1;
    while (x != 0){
        int rem = x % 8;
        x /= 8;
        result += index * rem;
        index *= 10;
    }
    printf("%d", result);
}

void userInput(){
    printf("Please enter a number between 0 and 32767: "); 
    scanf("%d", &inputNumber);
}

int main()
{
    userInput();
    printf ("0x");
    decToHex(inputNumber);
    printf("\nOo");
    decToOctal(inputNumber);
}
