#include <stdio.h>

int main(){
    int N = 10;
    int vetorzao[N];
    int ValordoUser;
    int encontrada = 0;
    int primeiraPosicao = -1;
    int contar;

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetorzao[i]);
    }

    printf("Digite um valor para procurar no vetor: ");
    scanf("%d", &ValordoUser);

    for (int i = 0; i < N; i++) {
        if (vetorzao[i] == ValordoUser) {
            if (!encontrada) {
                encontrada = 1;
                primeiraPosicao = i;
            }
            contar++;
        }
    }

    if (encontrada) {
        printf("O valor %d foi encontrado na posicao %d e aparece %d vez(es) no vetor.\n", ValordoUser, primeiraPosicao, contar);
    } else {
        printf("O valor %d nao foi encontrado no vetor.\n", ValordoUser);
    }

    return 0;
}


