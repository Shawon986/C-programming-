#include <stdio.h>

int main()
{
    printf("Hello world \n");//print anything
    printf("Taizhou University \n");
    printf("18658607019 \n");

    // variable declaration
    int num1;
    int num2;
    float num3;
    char num4;
    double num5;

    //variable initialization
    num1=20;
    num2=50;
    num3=34.56;
    num4='a';
    num5=45.8287878665 ;

    // Format speccifier
    int num6=78;
    float num7=65.89;
    printf("Number is %f \n",num7);
    printf("character is %c \n",num4);
    printf("Double nmbr is %.4lf \n",num5);

    int num8 =56;
    float num9= 45.54;

    printf("Int and float numbers are %d,%f",num8,num9);

    int num10;
    printf("please enter an integer value :");
    scanf("%d",&num10);
    printf("You have pressed : %d",num10);
    getch();
}
/*this is
multiple line
comment
*/
