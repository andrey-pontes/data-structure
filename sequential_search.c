#include <stdio.h>

int sequential_search(int array[], int size, int target, int *comparisons) {
    
    for (int i = 0; i < size; i++) {
        (*comparisons)++;
        if (array[i] == target) {
            return i;
        }
    }

    return -1;
}

//exemplo de uso da funcao sequential_search
int main() {
    //array de exemplo
    int vector[] = {12, 44, 13, 88, 23, 94, 11, 39, 20, 16, 5, 33, 42};
    int size = sizeof(vector) / sizeof(vector[0]);
    int target = 88;
    int comparisons = 0;

    int result = sequential_search(vector, size, target, &comparisons);

    if (result == -1) {
        printf("Elemento nao encontrado.\n");
    } else {
        printf("Elemento encontrado no indice %d apos %d comparacoes.\n", result, comparisons);
    }

    return 0;
}
