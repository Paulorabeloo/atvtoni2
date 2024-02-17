#include <stdio.h>
int main() {
    // Declaração de variáveis
    float peso;
    float altura;
    float perc;
    float soma = 0;
    int idade;
    int k = 0;
    int c = 0;
    // Loop para solicitar as idades e calcular a soma
    for (int i = 0; i < 10; i++) {
        printf("Informe a idade da Pessoa\n");
        scanf("%i", &idade);
        printf("Informe a altura da Pessoa\n");
        scanf("%f", &altura);
        printf("Informe o peso da Pessoa\n");
        scanf("%f", &peso);
        soma += idade;
        if (peso > 90 && altura < 1.5) {
            k++;
        }
        if (idade >= 10 && idade <= 30 && altura > 1.9) {
            c++;
        }
    }
    soma = soma / 10;
    perc = (c * 100.0) / 10.0;
    printf("\nA média das idades %.2f", soma);
    printf("\nA quantidade de pessoas com peso superior a 90kg e altura inferior a 1.5m é igual a %i", k);
    printf("\nA percentagem de individuos entre idades de 10 a 30 anos com altura maior que 1.90m é %.2f%%", perc);
    return 0;
}
