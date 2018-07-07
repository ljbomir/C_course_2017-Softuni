#include <stdio.h>
#include <stdlib.h>

void return_array()
{
    char *array;
    char *new_array;
    int N;
    scanf("%d", &N);
    array = (char*)malloc ((N + 1 ) * sizeof(char));
    new_array = (char*)malloc ((N +1) * sizeof(char));
    scanf("%s", array);
    //printf("%c", 64 );

    for (int i = 0; i < N; i++){

        new_array[i] = tolower(array[N-1-i]);

    }

    for (int i=0; i<N; i++){

        if (new_array[i] != '@'){
        printf ("%c", new_array[i]);
        } 
    }
    free(array);
    free(new_array);
}

int main (){

    return_array();
    return 0;
}
