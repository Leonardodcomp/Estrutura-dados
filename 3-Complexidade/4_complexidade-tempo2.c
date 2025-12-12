//Qual a ordem de complexidade de tempo do algoritmo dado abaixo?


int soma_elementos(int array[], int n) {
int soma = 0;
for (int i = 0; i < n; i++) {
soma += array[i];
}
return soma;
}


// O(n) = Para fazer a soma ele tem que passar por todos os elementos do vetor, Não existe omega, porque ele soma cada entrada do vetor, no caso do omega ser 1 é porque o N também é 1, logo Omega (1) = O(1))

