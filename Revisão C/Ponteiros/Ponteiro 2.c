#include <stdio.h>
#include <stdlib.h>

//código para trocar o valor de dois inteiros
/*
void troca(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    printf("\nAntes da troca:\n");
    printf("x = %d, y = %d\n", x, y);

    troca(&x, &y);

    printf("\nDepois da troca:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
*/

int main (){

    int vetor [5];
    int *troca = vetor;
    int menor;
    int soma = 0;

        for (int i=0; i<5; i++){
            printf ("Escreva o vetor %d\n", i+1);
            scanf("%d", &vetor [i]);
        }

            menor = *troca;

            for (int i=0; i<5; i++) {

                soma += *troca;

                if (*troca < menor){
                    menor = *troca;
                }
                troca++;
            }

    printf ("Menor valor = %d\n", menor);
    printf ("O valor da soma é = %d\n", soma);
    printf ("Endereço do menor número é: %d\n", )

    return 0;
}
