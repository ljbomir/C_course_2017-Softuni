#include <stdio.h>
#include <stdlib.h>

typedef enum{
    Poor = 2,
    Average = 3,
    Good = 4,
    VeryGood = 5,
    Excellent = 6,
    Job = 100
} Marks;

int sum; //this will be the sum of all points.

int userInput ()
{
    int marks[8];
    printf("Please enter the marks for test, task1, task2, task3, task4, task5, homework, hw_evaluation of the Student: ");
    scanf("%d,%d,%d,%d,%d,%d,%d,%d", &marks[0], &marks[1], &marks[2], &marks[3], &marks[4], &marks[5], &marks[6], &marks[7]);
    
    // check if user has entered more than the maximum point per task.
    for (int i = 1; i < 8; i++){
        if (marks[i] > 10 || marks[i] < 0){
            printf("ERROR: You have entered an invalid points\n");
            exit(1);
        }
    }
    if (marks[0] > 30 || marks[0] < 0){
            printf("ERROR: You have entered an ivalid points\n");
            exit(1);
    }else{
        for (int i = 0; i < 8; i++){
            sum += marks[i];
        }
    }
}

int markCalc(int x)
{
    if (x >= 0 && x <= 44){
            return Poor;
    }
    else if (x >= 45 && x <= 59){
            return Average;
    }
    else if (x >= 60 && x <= 74){
            return Good;
    }
    else if (x >= 75 && x <= 79){
            return VeryGood;
    }
    else if (x > 80 && x < 100){
            return Excellent;
    }
    else if (x == 100){
            return Job;
    }
}


void printDataForStudent(int receivedMark)
{   
    switch(receivedMark){
        case Poor:
            printf ("(Poor)");
            break;
        case Average:
            printf("(Average)");
            break;
        case Good:
            printf("(Good)");
            break;
        case VeryGood:
            printf("(Very Good)");
            break;
        case Excellent:
            printf("(Excellent)");
            break;
        case Job:
            printf("Wow man 100 points! Get a project or a job!");
            break;
        default:
            printf("ERROR - Mark out of range");
            break;
        }
}
      

int main()
{   
    printf ("Your sum points are %d\n ", userInput());
    int studentMark = markCalc(sum);
    
    //This is in case Stident has 100 points. Just for the fun.
    if (sum !=100){
    printf("Your mark is %d", studentMark);
    }else{
        printf ("Your mark is an absolute 6! ");
    }
    
    printDataForStudent(studentMark);
}    
