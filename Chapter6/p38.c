#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

void minArr(int arr[][EXAMS],int students,int exams);
void maxArr(int arr[][EXAMS],int students,int exams);
void averageArr(int arr[][EXAMS],int students,int exams);
void printArr(int arr[][EXAMS],int students,int exams);

int main()
{
    int arr[STUDENTS][EXAMS]={{100,96,77,92},{78,65,42,75},{88,84,67,90}};
    printArr(arr,STUDENTS,EXAMS);
    averageArr(arr,STUDENTS,EXAMS);
    maxArr(arr,STUDENTS,EXAMS);
    minArr(arr,STUDENTS,EXAMS);
}

void printArr(int arr[][EXAMS],int students,int exams)
{
    for (size_t i=0;i<students;i++)
    {
        for (size_t j=0;j<exams;j++)
        {
            printf("%d ",arr[i][j]);
        }
        puts("");
    }
}
void averageArr(int arr[][EXAMS],int students,int exams)
{
    int total=0;
    int totalAll=0;
    for (size_t i=0;i<students;i++)
    {
        for (size_t j=0;j<exams;j++)
        {
            total+=arr[i][j];
            totalAll+=arr[i][j];
        }
        printf("Average:%.2f\n",(float) total/exams);
        total=0;
    }
    printf("The class average is %.2f.\n",(float) totalAll/(exams*students));
}

void maxArr(int arr[][EXAMS],int students,int exams)
{
    int largest=arr[0][0];
    for (size_t i=0;i<students;i++)
    {
        for (size_t j=0;j<exams;j++)
        {
            if (arr[i][j]>largest)
            {
                largest=arr[i][j];
            }
        }
    }
    printf("The largest exam score is %d.\n",largest);
}

void minArr(int arr[][EXAMS],int students,int exams)
{
    int min=arr[0][0];
    for (size_t i=0;i<students;i++)
    {
        for (size_t j=0;j<exams;j++)
        {
            if (arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    printf("The minimum exam score is %d.\n",min);
}