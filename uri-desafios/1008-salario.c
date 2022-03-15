#include <stdio.h>

int main() {

    int employeerNum, hoursNum;
    float payPerHour;
    scanf("%i", &employeerNum);
    scanf("%i", &hoursNum);
    scanf("%f", &payPerHour);

    float salary = payPerHour * hoursNum;
    printf("NUMBER = %i\n", employeerNum);
    printf("SALARY = U$ %.2f \n",salary);

    return 0;
}
