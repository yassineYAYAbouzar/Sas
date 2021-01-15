#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char nom[20],
        prenom[20],
        Sex[1] ,
        GSM [20] ;
   int age;
   printf("Entre votre prenom: ");
   scanf("%s" , &nom);
   printf("entre votre nom: ");
   scanf("%s" , prenom);
   printf("entre votre age: ");
   scanf("%d" , &age);
   printf("entre votre Sex: ");
   scanf("%s" , Sex);
   printf("entre votre GSM: ");
   scanf("%s" , GSM);
   printf("welcom %s %s votre sex est %s votre age est %d est votre GSM %s" , nom  ,prenom , Sex , age , GSM);

    return 0;
}
