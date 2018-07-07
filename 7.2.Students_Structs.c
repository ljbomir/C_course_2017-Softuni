#include <stdio.h>
#define number_of_Students 10

typedef struct{
    char Name;
    int Height;
    int Weight;
    int Grade;
    int *Average_mark;
} Student;
Student MyStudent;

//this function will set Student properties by random generated values based on the limits as inputs
void generate_Student_info(char name; int height, int weight, int grade, int averageMark){
    //MyStudent.Name = name;
    MyStudent.Weight = rand() % weight;
    MyStudent.Height = rand() % height;
    MyStudent.Grade = rand() % grade;
    MyStudent.Average_mark = averageMark;
}

void calculateMarks(){
    int i,sum;
    for (i=0; i<number_of_Students; i++){
        sum += MyStudent.Grade[i];
    }
    sum /= number_of_Students;
    MyStudent.Average_mark = sum;
}

int main(){
    calculateMarks();
    printf("%s", Student)
   return 0;
}
