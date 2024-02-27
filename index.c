


#include<stdio.h>

void addition()
{
     int n1, n2;
     printf("Enter two number : ");
     scanf("%d %d", &n1, &n2);
     printf("\nAddition is : %d", n1 + n2);
}
void subtraction()
{
     int n1, n2;
     printf("Enter two number : ");
     scanf("%d %d", &n1, &n2);
     printf("\nSubtraction is : %d", n1 - n2);
}
void multiplication()
{
     int n1, n2;
     printf("Enter two number : ");
     scanf("%d %d", &n1, &n2);
     printf("\nMultiplication is : %d", n1 * n2);
}
void division()
{
    float n1, n2;
    printf("Enter two number : ");
    scanf("%d %d", &n1, &n2);
    if ( n2 != 0 )
         printf("Division is : %.2f", n1/n2);
    else
         printf("Denomination can't be ZERO");
}

void main()
{
    char repeat;
    int choice;
    do
    {
         printf("Press 1, for Addition\n");
         printf("Press 2, for Subtraction\n");
         printf("Press 3, for Multiplication\n");
        printf("Press 4, for Division\n");
       printf("Press 5, for EXIT\n");
       scanf("%d", &choice);
    
       switch(choice)
      {
           case 1:
                  addition();
                  break;
           case 2:
                  subtraction();
                  break;
           case 3:
                 multiplication();
                 break;
           case 4:
                 division();
                 break;
        //    case 5;
        //          exit(0);
        //          break;
           default :
                 printf("WRONG Choice!!!!!!!");
      }
      printf("\nDo you want to enter again(Y/N)? : ");
      fflush(stdin);
      scanf("%c", &repeat);
   } while(repeat == 'Y' || repeat == 'y');
    
   printf("Thankyou");
   
    //  getch();
}

