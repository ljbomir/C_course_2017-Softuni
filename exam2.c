#include <stdio.h>
#include <math.h>

float add(float a, float b){
    return a+b;
}

float deduct(float a, float b){
    return a-b;
}

float multiply(float a, float b){
     return a*b;
}

float division(float a, float b){
    return a / b;
}

float exponent(float a, int b)
{   
    float result = 1;
    for (int i = 0; i < b; i++){
        result *= a;
    }
    return result;
}

float square(float a)
{
    return sqrt(a);
    
}

float calculator()
{       
        char input; 
        float a=0,b=0;
        scanf("%c", &input);
        
        //printf("%c\n", input);
     switch(input){
        case '+':
            scanf("%f %f", &a, &b);
            return add(a,b);
            break;
        case '-':
            scanf("%f %f", &a, &b);
            return deduct(a,b);
            break;
        case '*':
            scanf("%f %f", &a, &b);
            return multiply(a,b);
            break;
        case '/':
            scanf("%f %f", &a, &b);
            return division(a,b);
            break;
        case '^':
            scanf("%f %f", &a, &b);
            return exponent(a,b);
            break;
        case 'R':
            scanf("%f", &a);
            return square(a);
            break;
        default:
            printf("ERROR - out of range");
            break;
        }
}


int main ()
{
    printf("%0.2f", calculator());
    return 0;
    
}