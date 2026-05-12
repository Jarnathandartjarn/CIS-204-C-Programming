#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){

double monthlyIncome;
double monthlyExpense;
double remainingIncome;

printf("Please enter the amount of money you would like to make this month: ");
scanf("%lf", &monthlyIncome);
printf("You have entered $%.2lf as your monthly income. Is this correct? (y/n) (lowercase only): ", monthlyIncome);

char confirmation;
scanf(" %c", &confirmation);

while(confirmation != 'y'){
    if(confirmation == 'n'){
        printf("Please enter the amount of money you would like to make this month: ");
        scanf("%lf", &monthlyIncome);
        printf("Let's check now. Is %.2lf correct? (y/n): ", monthlyIncome);
        scanf(" %c", &confirmation);
    } else {
        printf("Invalid input. Please enter y/n: ");
        scanf(" %c", &confirmation);
    }
}

printf("out of loop\n");

double tithe = monthlyIncome * 0.1;
int titheRound = (int)ceil(tithe);

printf("Your tithe for this month will be: %d\n", titheRound);

double oweToParents = 193.00;
printf("You owe your parentals this month: %.2lf\n", oweToParents);

double autoGas = monthlyIncome * 0.15;
printf("Your budgeted gas for this month will be: %.2lf\n", autoGas);

double subscriptions = 35.61;
printf("Your subscriptions this month will be %.2lf\n", subscriptions);


monthlyExpense = titheRound;
monthlyExpense += oweToParents;
monthlyExpense += autoGas;
monthlyExpense += subscriptions;
printf("Your total expenses for this month will be: %.2lf\n", monthlyExpense);

remainingIncome = monthlyIncome - monthlyExpense;
printf("Your remaining income for this month will be: %.2lf\n", remainingIncome);

char confirmation2;
double newCCDebt;
printf("Do you have credit card debt? (y/n): ");
scanf(" %c", &confirmation2);
    if(confirmation2 == 'y'){
        double creditCardDebt;
        printf("Please enter the amount of your credit card debt: ");
        scanf("%lf", &creditCardDebt);

        if(creditCardDebt <= 100){
            printf("Adding $100 to your budget for this month to pay the entirety off.\n");
            monthlyExpense += 100;
            remainingIncome -= 100;
            printf("Your new total expenses for this month will be: %.2lf\n", monthlyExpense);
            printf("Your new remaining income for this month will be: %.2lf\n", remainingIncome);
        }else if(creditCardDebt > 100){
            printf("We will break it down so that it can be paid off in four months.");
            double monthlyCCPayment = creditCardDebt / 4;
            printf("Your monthly credit card payment will be: %.2lf\n", monthlyCCPayment);
            newCCDebt = creditCardDebt - monthlyCCPayment;
            monthlyExpense += monthlyCCPayment;
            remainingIncome -= monthlyCCPayment;
            printf("Your new total expenses for this month will be: %.2lf\n", monthlyExpense);
            printf("Your new remaining income for this month will be: %.2lf\n", remainingIncome);
        }
    }if(confirmation2 == 'n'){
        printf("No credit card debt to worry about this month.\n");
    }

char confirmation3;
printf("Would you like to budget for gifts this month? (y/n): ");
scanf(" %c", &confirmation3);
    if(confirmation3 == )


return 0;
}