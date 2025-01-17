# Estrutura de Dados

## Algoritmos disponíveis nesse repositório:
  - `sequential_search`
  - `binary_search`

## Função `sequential_search`

### Descrição

A função `sequential_search` realiza uma busca linear no array, verificando cada elemento de forma sequencial até encontrar o `target` ou percorrer todo o array. Ela também conta o número de comparações feitas durante a execução da busca.

### Parâmetros da Função
  - `array[] (int[])`: Um array de inteiros no qual a busca será realizada.
  - `size (int)`: O tamanho do array.
  - `target (int)`: O número a ser buscado no array.
  - `comparisons (int *)`: Um ponteiro para uma variável inteira que será atualizada com o número de comparações feitas durante a execução da busca.

### Retorno
  - Índice do elemento encontrado: Se o elemento target for encontrado no array, a função retorna o índice do mesmo.
  - `-1`: Se o elemento não for encontrado, a função retorna -1.

## Função `binary_search`

### Descrição

A função `binary_search` realiza uma busca binária em um array de inteiros ordenado, retornando o índice do elemento buscado ou `-1` caso o elemento não seja encontrado. O número de comparações feitas durante a busca também é contado e retornado.

### Parâmetros da Função
  - `arr[] (int[])`: Um array de inteiros ordenado em ordem crescente.
  - `low (int)`: O índice inicial do array (geralmente 0).
  - `high (int)`: O índice final do array (geralmente size - 1).
  - `target (int)`: O número a ser buscado no array.
  - `comparisons (int *)`: Um ponteiro para uma variável inteira que será atualizada com o número de comparações feitas durante a execução da busca.

### Retorno
  - Índice do elemento encontrado: Se o elemento target for encontrado no array, a função retorna o índice do mesmo.
  - `-1`: Se o elemento não for encontrado, a função retorna -1.

## Exemplos de uso dos algoritmos
Implementados na função `main` de cada arquivo.



