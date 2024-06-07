#include<stdio.h>
int main(){
    int choose,loop=1, Tamount = 0, pizza=180, burger=100, dosa=120, idli=50;
    char yn;
    while (loop)
    {
    printf("1.Pizza\t\tPrice = %drs/pcs\n",pizza);
    printf("2.Burger\tPrice = %drs/pcs\n",burger);
    printf("3.Dosa\t\tPrice = %drs/pcs\n",dosa);
    printf("4.Idli\t\tPrice = %drs/pcs\n",idli);
printf("Please Enter your choose... : ");
scanf("%d", &choose);

switch (choose)
{
case 1:
    printf("\nYou have selected pizza.");
    break;
case 2:
    printf("\nYou have selected burger.");
    break;
case 3:
    printf("\nYou have selected dosa.");
    break;

default:printf("\nYou have selected idli.");
    break;
}
int qua,amount ;

printf("\nEnter the quantity : ");
scanf("%d", &qua);

 switch (choose)
 {
 case 1:
    amount = pizza * qua;
    break;
 case 2:
    amount = burger * qua;
    break;
 case 3:
    amount = dosa * qua;
    break;
 
 default: amount = idli * qua;
    break;
 }

printf("Amount : %d",amount);
Tamount = Tamount + amount;
printf("\nTotal Amount is: %d",Tamount);

printf("\nDo you want place more order ? y & n :");
scanf(" %c", &yn);
if (yn == 'n' || yn == 'N' )
{
   loop = 0;
}else{
    printf("\n-------------- Menu --------------\n\n");
}

}

    return 0;
}