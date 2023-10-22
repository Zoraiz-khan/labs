#include <stdio.h>

int main()
{
    const double usd_to_gbp_rate = 0.79;
    const double usd_to_jpy_rate = 127.69;

    double usd_amount;
    printf("Please enter the total amount of US dollar");
    scanf("lf", &usd_amount);

    double fee = 0.10*usd_amount;
    double remaining_usd = usd_amount-fee;

    double gbp_amount=remaining_usd*0.5*usd_to_gbp_rate;
    int jpy_amount = (int)(remaining_usd*0.5*usd_to_gbp_rate);

    printf("fee (10%%): $%.2lf\n", fee);
    printf("you get:\n%2lf GBP\n%d JPY\n",gbp_amount,jpy_amount);

    return 0;

}