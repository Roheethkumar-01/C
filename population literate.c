//Population literate

#include <stdio.h>

int main()
{
    int pop,men,women,women_lit,men_lit,lit,ill,women_ill,men_ill,menp,tot_lit,menp_lit;
    printf("Enter the population: ");
    scanf("%d",&pop);
    printf("Enter the Men percent: ");
    scanf("%d",&menp);
    printf("Enter the literate percent: ");
    scanf("%d",&tot_lit);
    printf("Enter the Men literate percent: ");
    scanf("%d",&menp_lit);
    men=pop*menp/100;
    women=pop-men;
    men_lit=men*menp_lit/100;
    lit=pop*tot_lit/100;
    women_lit=lit-men_lit;
    ill=pop-lit;
    men_ill=men-men_lit;
    women_ill=women-women_lit;
    printf("Men:%d percent",men);
    printf("\nwomen: %d percent",women);
    printf("\nLiterated: %d percent",lit);
    printf("\nMen Literate: %d percent",men_lit);
    printf("\nwomen Literate: %d percent",women_lit);
    printf("\nIlliterated: %d percent",ill);
    printf("\nMen Illiterated: %d percent",men_ill);
    printf("\nWomen Illiterated: %d percent",women_ill);
    return 0;
}
