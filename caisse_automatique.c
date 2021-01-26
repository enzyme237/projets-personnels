#include <stdio.h>

//int main(void)
// {
//    int ageUtilisateur = 0;

//    printf("quel age avez-vous ? ");
//    scanf( "%d", &ageUtilisateur);

//    printf("vous avez %d ans.\n", ageUtilisateur);

//    return 0;
// // }


// int main(void)

// {
//    int  entrernombre=0;

//    printf("entrez un nombre : ");
//    scanf( "%d", &entrernombre);

//    printf("vous avez tape : %o\n", entrernombre);
//    printf("vous avez tape : %x\n", entrernombre);

//    return 0;
// }


// {
//    int  entrernombre=0;

//    printf("entrez un nombre");
//    scanf( "%x", &entrernombre);

//    printf("vous avez tape %x .\n", entrernombre);

//    return 0;
// }



int main(void)
{
int sommeAchat = 0;
int sommeDonnee = 0;
int monnaieRendu = 0,bill20 = 0,bill10 = 0,bill5 = 0,coin2 = 0,coin1 = 0, balance_to_be_complete = 0;

printf(" Entrez sommeAchat");
scanf("%d", &sommeAchat);
printf("Entrez sommeDonnee");
scanf("%d",&sommeDonnee);


if (sommeDonnee < sommeAchat)
{
 balance_to_be_complete =sommeDonnee-sommeAchat;
 printf("votre paiement  est insuffisant : %d euro(s) SALE Clochard\n" , balance_to_be_complete);
 return -1;
}
else if (sommeDonnee == sommeAchat)
{
 printf(" votre rendu est 0.00 euro");
 return 0; 
}
else if(sommeDonnee > sommeAchat)
{
 monnaieRendu = sommeDonnee-sommeAchat;

 bill20 = monnaieRendu/20;
 monnaieRendu %=20;

 bill10 = monnaieRendu/10;
 monnaieRendu %=10;

 bill5 = monnaieRendu/5;
 monnaieRendu %=5;

 coin2 = monnaieRendu/2;
 monnaieRendu %=2;

 coin1 = monnaieRendu/1;
 monnaieRendu %=1; 

 printf("\n_Monnaie A Rendre_\n");

if(bill20 > 0)
printf("Billet(s) de 20 euros :%d\n" , bill20);

if(bill10 > 0)
printf("Billet(s) de 10 euros :%d\n" , bill10);

if(bill5 > 0)
printf("Billet(s) de 5 euros  :%d\n" , bill5);

if(coin2 > 0)
printf("coin(s) de 2 euros  :%d\n" , coin2);

if(coin1 > 0)
printf("coin(s) de 1 euros  :%d\n" ,coin1 );
}
return 0;
}







