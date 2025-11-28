//Qual a ordem de complexidade de tempo do algoritmo dado abaixo?

void bubble_sort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;}}}



// O(n2) = mesma lógica da q4, estrutura de repetição dentro de estrutura de repetição, tem que varrer o vetor inteiro.

