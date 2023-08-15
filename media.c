#include <stdio.h>

int main() {
    int i, entrada;
    double media, soma, numeros[100];

    printf("Calcular média entre quantos números? ");
    scanf("%i", &entrada);
    printf("Digite %i números: ", entrada);
    for (i=0; i<entrada; i++) {
        scanf("%lf", &numeros[i]);
        soma += numeros[i];
    }

    media = soma / entrada;

    printf("A média entre os números é: %.2lf", media);

    return 0;
}