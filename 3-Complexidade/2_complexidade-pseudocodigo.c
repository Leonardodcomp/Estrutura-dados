//Qual a ordem de complexidade de tempo do algoritmo dado abaixo?

/*

1.algoritmo Atividade;
2.constante
    3. Max = 50;
4.variáveis
    5. Notas: vetor de reais[Max];
    6. Media: real;
    7. I, Quant: inteiros;
8.inicio
    9. Media=0;
    10. para I = 0 até Max-1 faça
        11. início
            12. leia(Notas[I]);
            13. Media = Media + Notas[I];
        14. fim;
    15. Media = (real)Media / Max;
    16. Quant = 0;
    17. para I = 0 até Max-1 faça
        18. se (Notas[I] > Media) então
            19. Quant = Quant + 1;
    20. escreva(Quant);
21.fim.

*/





// O(n)= linear, tem dois laços de repetição, mas um não está dentro do outro