#include <stdio.h>
#include <stdlib.h>

int binary_search(int array[], int low, int high, int target, int *comparisons) {
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        (*comparisons)++; 

        if (array[mid] == target) {
            return mid;
        }

        if (array[mid] > target) {
            high = mid - 1;
            continue;
        }

        low = mid + 1;
    }

    return -1;
}

//exemplo de uso da funcao binary_search
int main() {
    //array de exemplo
    int array[] = {12, 44, 13, 88, 23, 94, 11, 39, 20, 16, 5, 33, 42};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 88;
    int comparisons = 0;

    //esquema para garantir que o array esteja ordenado
    int compare(const void *a, const void *b) {
        return (*(int *)a - *(int *)b);
    }
    qsort(array, size, sizeof(int), compare);

    int result = binary_search(array, 0, size - 1, target, &comparisons);

    if (result == -1) {
        printf("Elemento nao encontrado.\n");
    } else {
        printf("Elemento encontrado no indice %d apos %d comparacoes.\n", result, comparisons);
    }

    return 0;
}
