// check mobile number length is correct or not

#include<stdio.h>
#include<conio.h>
int main()
{
     char mn[200];
     printf("Enter mobile number\n");
     gets(mn);
     
     if(strlen(mn)==10)
     {
          printf("Number is correct");
     }
     else
     {
          printf("Number is incorrect");
     }
}
