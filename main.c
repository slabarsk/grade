#include <stdio.h>

int main() {

    int Grade;

    printf("Write your grade:");
    scanf_s("%d", &Grade);

if (Grade<0 || Grade>100){
    printf("Grade:%d is not valid. The grade must be between 0 and 100!" ,Grade);
}

    else if (Grade <=101 && Grade>=94)
    {
        printf("Grade: %d\nLetter Grade = A+", Grade);

    }

    else if (Grade <=95 && Grade>=89)
    {
        printf("Grade: %d\nLetter Grade = A", Grade );

    }

    else if (Grade <=90 && Grade>=84)
    {
        printf("Grade: %d\nLetter Grade = B+",Grade);

    }

    else if (Grade <=85 && Grade>=79)
    {
        printf("Grade: %d\nLetter Grade = B",Grade);

    }


    else if (Grade <=80 && Grade>=74)
    {
        printf("Grade: %d\nLetter Grade = B-",Grade);

    }


    else if (Grade <=75 && Grade>=69)
    {
        printf("Grade: %d\nLetter Grade = C+\n",Grade);

    }


    else if (Grade <=70 && Grade>=64)
    {
        printf("Grade: %d\nLetter Grade = C",Grade);

    }


    else if (Grade <=65 && Grade>=59)
    {
        printf("Grade: %d\nLetter Grade = C-",Grade);

    }


    else if (Grade <=60 && Grade>=54)
    {
        printf("Grade: %d\nLetter Grade = D+",Grade);

    }


    else if (Grade <=65 && Grade>=53)
    {
        printf("Grade: %d\nLetter Grade = D",Grade);

    }


    else if (Grade <=50 && Grade>=0)
    {
        printf("Grade: %d\nLetter Grade = F",Grade);

    }
  //DECODE OF BY SLABARSK



    return 0; }