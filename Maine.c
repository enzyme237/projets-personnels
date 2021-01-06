#include <stdio.h>

int main(void)
{
int nombreMin = 0;
int nombreMax = 0; ;  int Min = 1; int Max = 1000; int resultat = 0; int i = 0;
printf("entrez le nombre Minimum (entre 1 et 1 000  ) :");
scanf("%d" ,&nombreMin);

printf("entrez le nombre Maximum :");
scanf("%d" ,&nombreMax);

if (nombreMin > Max)
 {
  printf("quit the program :\n");
  return -1;
 }
 if (nombreMin < Min)
 {
  printf("syntax error :\n");
  return -1; 
 }
 if (nombreMin >  Max)
 {
  printf("syntax error :\n");
  return -1;
 } 
 
 
 if ( nombreMin != nombreMax)
  for(int i =nombreMin ; i < nombreMax + 1; i++)
   resultat += i ;
  else
       resultat = nombreMin;
       
  printf("resultat: %d\n" , resultat);
   
return 0;   
      
} 

  



 
 

