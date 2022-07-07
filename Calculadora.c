#include <stdio.h>
#include <stdlib.h>

    float CalSoma(float number01, float number02){
        return number01 + number02;
    }
    float CalProd(float number01, float number02){
        return number01 * number02;
    }
    float CalSub(float number01, float number02){
        return number01 - number02;
    }
    float CalDiv(float number01, float number02){
        return number01 / number02;
    }

int main(void)
{
    
    float n1, n2; 
    int escolha;
    
    printf("Digite um numero: ");
        scanf("%f", &n1);
    printf("Digite outro numero: ");
        scanf("%f", &n2);
    
    do{
        printf("\nDigite 0 para sair: \nDigite 1 para soma: \nDigite 2 para produto: \nDigite 3 para subtração: \nDigite 4 para divisão: \n");
       
        printf("Escolha: ");
            scanf("%d", &escolha);
            
        switch(escolha){
            case 0: 
                system("cls || clear");
                printf("--------> Tchau Tchau <--------\n");
                    break;
            case 1:
                system("cls || clear");
                printf("Resultado %.0f + %.0f = %.0f\n", n1, n2, CalSoma(n1, n2));
                    break;
            case 2:
                system("cls || clear");
                printf("Resultado %.0f x %.0f = %.0f\n", n1, n2, CalProd(n1, n2));
                    break;
            case 3:
                system("cls || clear");
                printf("Resultado %.0f - %.0f = %.0f\n", n1, n2, CalSub(n1, n2));
                    break;
            case 4:
                system("cls || clear");
                printf("Resultado %.0f / %.0f = %.0f\n\n", n1, n2, CalDiv(n1, n2));
                    break;        
            default:
                system("cls || clear");
                printf("Opção invalida\n");
        }
    } while(escolha != 0); 
    
    return 0;
}

