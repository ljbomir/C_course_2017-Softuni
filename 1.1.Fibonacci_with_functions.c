#include <stdio.h>
int N; //as a global variable

int main(){

void userinput(){
    int n;
    while(1){
    printf("Please input a Number: ");
    scanf("%d", &n);
    if (n == 0){
        printf("0 - Error: Please input a number larger than 0\n");
        }
    if (n<0){
        printf("%d - Error: Please input a positive number\n", n);
    }if (n>0){
        N=n;
        break;
        }
    }
}

//this funcstion will calculate Fibonacci numbers
void Fib(int x){
    unsigned long long int fibonacci[x];
    for (int i=1; i<=x; i++){
		//This only works if the values of first 2 indexes are assigned,
        // otherwise we will face undefined behaviour
        if (i == 1 || i == 2 ){
            fibonacci[i]=1;
        }else{
            fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
        }
    }
    printf("Your Fibonacci number is  %llu", fibonacci[x]);
    }

userinput(); // this will set N to a value based on the user input
Fib(N);

}
