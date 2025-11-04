#include <stdio.h>

int main(void) {
    int paycode;
    double salary, wage, hours, sales, payPerPiece;
    int pieces;

    printf("Enter employee paycode (1=Manager, 2=Hourly, 3=Commission, 4=Pieceworker, 0=Quit): ");
    scanf_s("%d", &paycode);

    while (paycode != 0) {
        switch (paycode) {
        case 1: // Manager
            printf("Enter the manager's weekly salary: ");
            scanf_s("%lf", &salary);
            printf("Manager's pay: $%.2f\n", salary);
            break;

        case 2: // Hourly worker
            printf("Enter the hourly wage: ");
            scanf_s("%lf", &wage);
            printf("Enter the number of hours worked: ");
            scanf_s("%lf", &hours);

            if (hours <= 40)
                salary = wage * hours;
            else
                salary = 40 * wage + (hours - 40) * wage * 1.5;

            printf("Hourly worker's pay: $%.2f\n", salary);
            break;

        case 3: // Commission worker
            printf("Enter gross weekly sales: ");
            scanf_s("%lf", &sales);
            salary = 250 + 0.057 * sales;
            printf("Commission worker's pay: $%.2f\n", salary);
            break;

        case 4: // Pieceworker
            printf("Enter the amount paid per piece: ");
            scanf_s("%lf", &payPerPiece);
            printf("Enter number of pieces produced: ");
            scanf_s("%d", &pieces);
            salary = payPerPiece * pieces;
            printf("Pieceworker's pay: $%.2f\n", salary);
            break;

        default:
            printf("Invalid paycode.\n");
            break;
        }

        printf("\nEnter next paycode (1-4, 0 to quit): ");
        scanf_s("%d", &paycode);
    }

    printf("Program ended.\n");
    return 0;
}
