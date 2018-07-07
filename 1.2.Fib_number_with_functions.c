#include <stdio.h>

int N;


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

void Fib(int x){

    double phi = (sqrt(5) + 1) / 2.0;

    // Formula source http://www.maths.surrey.ac.uk/hosted-sites/R.Knott/Fibonacci/fibFormula.html #6
    int n = round((log(x) + (log(5) / 2)) / log(phi));

    //Once we know the index we will calculate the closest Fibonacci number using the 1st program
    int fibonacci[n];

    for (int i=1; i<=n; i++){
        if (i == 1 || i == 2 ){
            fibonacci[i]=1;
        }else{
            fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
        }
    }
    //Check if x is at the middle possition. If yes return the low Fibonacci number
    if (x == fibonacci[n-1] + ((fibonacci[n] - fibonacci[n-1] ) / 2)){
        printf("Your closest Fibonacci number is  %d on %d position\n", fibonacci[n-1],n-1);
     }else{
        printf("Your closest Fibonacci number is  %d on %d position\n", fibonacci[n],n);
        }
    }

userinput(); // this will set the global N to the user input
Fib(N);

}
