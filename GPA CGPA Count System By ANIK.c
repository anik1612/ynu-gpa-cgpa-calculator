#include <stdio.h>
#include <stdlib.h>

int Gpa ()
{
    int sub;
    float a[100], b[100];
    printf("Enter how many subject you have?\n");
    scanf("%d", &sub);
    for(int i=1; i<=sub; i++)
    {
        printf("Enter No. %d Subject Credit:\n", i);
        scanf("%f",&a[i]);
        printf("Enter your Obtain GPA For No. %d Subject:\n", i);
        scanf("%f",&b[i]);
    }
    //calculation part
    float result=0, sum=0, GPA_Count;
    for(int i=1; i<=sub; i++)
    {
        result+= a[i]*b[i];
        sum+=a[i];
        GPA_Count = result/sum;
    }
    printf("Your GPA is: %.2f\n\n", GPA_Count);
    printf("Code BY: ANIK SARKER\n");
    return 0;
}

int Cgpa ()
{
    int sem;
    float sr[100], sc[100], tc=0, gs=0, result;
    printf("How many semester you have passed: ");
    scanf("%d", &sem);
    for(int i=1; i<=sem; i++)
    {
        printf("Enter %d No. Semester GPA:\n", i);
        scanf("%f",&sr[i]);
        printf("Enter %d No. Semester Total Credit:\n", i);
        scanf("%f",&sc[i]);
        tc+=sc[i];
        gs+=sr[i]*sc[i];
    }
    result = gs/tc;
    printf("Your CGPA= %.3f\n\n", result);
    printf("Code BY: ANIK SARKER\n");
}


int main ()
{
    int n;
    printf("You Want to Calculate GPA OR CGPA?\nFor Gpa input 1\nFor Cgpa input 2\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        Gpa();
        break;
    case 2:
        Cgpa();
        break;
    default:
        printf("You Enter Wrong Key");
        break;
    }
    system("pause");
}
