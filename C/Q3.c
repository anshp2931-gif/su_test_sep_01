#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5;
    printf("Enter the marks of sub 1: ");
    scanf("%f",&sub1);
    printf("Enter the marks of sub 2: ");
    scanf("%f",&sub2);
    printf("Enter the marks of sub 3: ");
    scanf("%f",&sub3);
    printf("Enter the marks of sub 4: ");
    scanf("%f",&sub4);
    printf("Enter the marks of sub 5: ");
    scanf("%f",&sub5);
    float total=sub1+sub2+sub3+sub4+sub5;
    float percentage=(total/500)*100;
    printf("\nTotal Marks = %.2f", total);
    printf("\nPercentage = %.2f%%\n", percentage);
    if(percentage>=90)
    {
        printf("Grade A+");
    }
    else{
        if(percentage>=80)
        {
            printf("Grade A");
        }
        else{
            if(percentage>=70)
            {
                printf("Grade B");
            
        }
        else{
            if(percentage>=60){
                printf("Grade c");
             }
             else{
                if(percentage>=50){
                printf("Grade D");
                }
             else{
                if(percentage>=40){
                    printf("Grade E");
                }
                else{
                    printf("FAIL");
                }
            }
        }
    }
}
}
return 0;    
}