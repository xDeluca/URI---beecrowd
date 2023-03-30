#include <stdio.h>

int main() {
 
    int Ndigitado, Maior, contagem, contador;
    contagem = 0;
    Maior = 0;
   for(contador =1;contador <=100; contador++){
       scanf("%d" , &Ndigitado);
       if(Ndigitado> Maior){
           Maior = Ndigitado;
           contagem = contador;
       }
   }
    
    printf("%d\n%d\n"  , Maior , contagem);
    return 0;
}
