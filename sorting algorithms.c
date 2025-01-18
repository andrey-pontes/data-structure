#include <stdio.h>
#include <stdbool.h>

//definindo o tipo função de ordenação
typedef void (*SortFunction)(int array[], int n);


void bubble_sort(int array[], int n) {

    if (n <= 1) return;

    bool swapped = false;

    for (int i = 0; i < n - 1; i++) {

        if (array[i] > array[i + 1]) {
            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
            swapped = true;
        }

    }

    if (!swapped) return;

    bubble_sort(array, n - 1);
}

//função para mostrar o array
void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

//função principal para aplicar a estratégia de ordenação
void sort_array(SortFunction sort_function, int array[], int size) {
    
    printf("Array original: ");
    print_array(array, size);

    sort_function(array, size);

    printf("Array ordenado: ");
    print_array(array, size);

}


int main() {
    //array de exemplo
    int array[] = {64, 34, 25, 12, 22, 11, 93};
    int size = sizeof(array) / sizeof(array[0]);
    //ordenando com o bubble sort
    sort_array(bubble_sort, array, size);

    return 0;
}
