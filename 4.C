
#include <stdio.h>

int main(){
    int N = 10;
    int vetorzao[N];
    
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetorzao[i]);
    }
    
     for (int i = 0; i < N / 2; i++) {
        int temp = vetorzao[i];
        vetorzao[i] = vetorzao[N - i - 1];
        vetorzao[N - i - 1] = temp;
    }
    
    printf("Vetor modificadao:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetorzao[i]);
    }
    printf("\n");

    return 0;
}
