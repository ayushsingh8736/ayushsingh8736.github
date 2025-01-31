#include<stdio.h>
#include<conio.h>

int main()
{
    int balance,a;
    char user;
    printf(" How mach money do you want your Account=");
    scanf("%d",&balance);

    printf("Enter c for credit\n");
    printf("Enter d for debit\n");
    printf("Enter b for Balance\n");
    scanf(" %c",user);

    switch (user){
        case 'b':
            printf("Balance=%d",balance);
            break;

        case'c':
            printf("how much money do you want credit=");
            scanf("%d",&a);
            printf("After credit your balance =%d, balance+a");
            break;

        case 'd':
        printf("how much money do you want debit");
        scanf("%d",&a);
        if(balance<a){
            printf("oops Insufficient balance!");
        }
        else{
            printf("After debit your account balance=%",balance-a);
        }
        break;
        default:
            printf("wrong key");
    }
    return 0;
}



