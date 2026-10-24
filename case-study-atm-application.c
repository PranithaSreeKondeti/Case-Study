
#include <stdio.h>

int main()
{
   int choice;
   float balance,amount;
   printf("Enter current balance:");
   scanf("%f",&balance);
   printf("\n1.Balane inquiry");
   printf("\n2.Cash withdrawal");
   printf("\n3.Cash deposit");
   printf("\n Enter your choice:");
   scanf("%d",&choice);
   if(choice==1)
   printf("Current balance=%f",balance);
   else
       if(choice==2)
       {
        printf("Enter withdrawal amount:");
        scanf("%f",&amount);
           if(amount<=balance)
           {
            balance=balance-amount;
            printf("Transaction successful");
            printf("\n Remaining balance=%f",balance);
           }
           else
           printf("Insufficient balance");
        }
        else
            if(choice==3)
            {
                printf("Enter deposit amount:");
                scanf("%f",&amount);
                balance=balance+amount;
                printf("Deposit successful");
                printf("\n updated balance=%f",balance);
            }
            else 
              printf("Invalid option");
}

