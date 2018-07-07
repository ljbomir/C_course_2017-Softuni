#include <stdio.h>

double a,b,c,d,f,g,h,k,l,m;

float global_array[10];

int main(){
void even(int x){
    if (x % 2 == 0){
    printf ("even");
    }else{
    printf("odd");
    }
}

int multi_3 (int x){
    if (x % 3 == 0){
    printf("yes");
    }else{
    printf("no");
    }
}

int multi_5 (int x){
    if (x % 5 == 0){
    printf("yes");
    }else{
    printf("no");
    }
}

int multi_9 (int x){
    if (x % 9 == 0){
    printf("yes");
    }else{
    printf("no");
    }
}

float division_10(float x){
    return (x / 10) ;
}

float division_17(float x){
    return (x / 17) ;
}


    //float a,b,c,d,f,g,h,k,l,m;
    //printf("Please enter a number separated by commas: ");
    //scanf("%f,%f,%f,%f,%f,%f,%f,%f,%f,%f", &a,&b,&c,&d,&f,&g,&h,&k,&l,&m);

/*    global_array[0] = a;
    global_array[1] = b;
    global_array[2] = c;
    global_array[3] = d;
    global_array[4] = f;
    global_array[5] = g;
    global_array[6] = h;
    global_array[7] = k;
    global_array[8] = l;
    global_array[9] = m; */




//printf("%f - %s, %s, %s, %s, %f, %f\n", a, even(a), multi_3(a), multi_5(a), multi_9(a), division_10(a), division_17(a));
printf("%d\n", even(5));

}
