#include <stdio.h>

int main(){
int N;
while(1){
    printf("Please input a Number: ");
    scanf("%d", &N);
    if (N == 0){
        printf("0 - Error: Please input larger number than 0\n");
    }
    if (N<0){
        printf("%d - Error: Please input a positive number\n", N);
    }if (N>0){
        break;
    }
}

int fibonacci[N];
fibonacci[0]=1;
    for (int i=0; i<N; i++){
        if (i == 0 || i == 1 ){
            fibonacci[i]=1;
        }else{
            //This is only work if the values of first 2 indexes are assigned,
            // otherwise we will face undefrined values behaviour
            fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
        }
    }
        // Loop for debugging purpose
        //for (int i=0; i<N; i++){
        //    printf("%d\n", fibonacci[i]);
        //}
    printf("Your Fibonacci number is  %d", fibonacci[N-1]);
}

