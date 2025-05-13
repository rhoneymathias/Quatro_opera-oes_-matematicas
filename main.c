/******************************************************************************

Elabore um algoritmo que receba dois números e permita que o usuário selecione 
uma das quatro operações e em seguida mostre o resultado 
até o usuario decidir parar.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float num1 = 0.0;
    float num2 = 0.0;
    float result = 0.0;
    int operacao = -1;
    
    while(operacao !=0){
     printf("selecione uma das quatro operações que você deseja realizar \n");
     printf("1 - somar \n2 - Subtarir\n3 - Multiplicar\n4 - Dividir\n");
     scanf("%d", &operacao); 
    
     printf("Informe o primeiro número\n");
     scanf("%f", &num1);
    
     printf("informe o segundo número\n");
     scanf("%f", &num2); 
    
    
     if(operacao == 1){
        result = num1 + num2;
     }else if(operacao == 2){
        result = num1 - num2;
     }else if (operacao == 3){
        result = num1*num2;
     }else if(operacao == 4){
        result = num1/num2;
     }else{
      printf("Operação Inválida \n");
    }
    
    printf("O resultado é %.2f\n", result);
    
    printf("Deseja continuar? (1 - Sim  0- Não)\n");
    scanf("%d", &operacao);
    }
    
    return 0;
    
}
