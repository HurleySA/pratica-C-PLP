#include <stdio.h>
#include <stdlib.h>

int main()
{
   int var, dif, maior, menor;

   for(int i = 0; i < 5; i++){
        scanf("%d", &var);
        if(i == 0){
            maior = var;
            menor = var;
        }else{
            maior = atualizaMaior(var,maior);
            menor = atualizaMenor(var,menor);
        }
   }

   dif = maior - menor;
   printf("%d", dif);



   return 0;
}

int atualizaMaior(int var, int maiorAtual){
    int saida;
    if(var > maiorAtual){
        saida =  var;
    }else{
        saida = maiorAtual;
    }
    return saida;
}

int atualizaMenor(int var, int menorAtual){
    int saida;
    if(var < menorAtual){
        saida =  var;
    }else{
        saida = menorAtual;
    }
    return saida;
}
