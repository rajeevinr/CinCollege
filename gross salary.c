
#include <stdio.h>
int main(){

    float BS, DA, HRA, TA, GS;
    printf("\nInput Your basic Salary. ");
    scanf("%f", &BS);
    if (BS >= 5000)
    {
        DA = (110 * BS) / 100;
        HRA = (20 * BS) / 100;
        TA = 500;
    }
    else if (BS >= 3000 && BS <= 5000)
    {
        DA = (100 * BS) / 100;
        HRA = (150 * BS) / 100;
        TA = 400;
    }
    else if (BS < 3000)
    {
        DA = (90 * BS) / 100;
        HRA = (10 * BS) / 100;
        TA = 300;
    }
    GS = BS + DA + HRA + TA;
    printf("\n Your Basic Salary is --> %.2f", BS);
    printf("\n Your Dearness allowance (DA) is --> %.2f", DA);
    printf("\n Your House Rent Allowance (HRA) is --> %.2f", HRA);
    printf("\n Your Travelling Allowance (TA) is --> %.2f", TA);
    printf("\n Your Gross Salary is --> %.2f", GS);
    return 0;
}
