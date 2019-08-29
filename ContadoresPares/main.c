#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  /**  char numeros[50];
    gets(numeros);

    printf(numeros);

   **/
   char *mod;
   char entrada[50];
   gets(entrada);
   int arrayInt[strlen(entrada)];
   int valor;
   int totalPares = 0;

   mod = strtok(entrada, " ");
   valor = atoi(entrada);
   if(valor % 2 == 0){
    totalPares++;
   }
   do
   {
      mod = strtok('\0', ", ");
      if(mod)
      {
        valor = atoi(mod);
        if(valor % 2 == 0){
        totalPares++;
   }
      }
   } while(modn);

    printf("\n%d", totalPares);
   return 0;

}
