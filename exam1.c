#include <stdio.h>

int main(){
    int numbers[100] = {0};

    for (int i = 0; i < 100; i++){
        scanf("%d\n", &numbers[i]);
    }

    for (int i = 0; i < 100; i++){
        if (numbers[i] >= 0 && numbers[i] <= 100){
            printf("%d ", numbers[i]);
            
        }
    }
    return 0;
}
