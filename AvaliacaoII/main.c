#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
Inicio:
    setlocale(LC_ALL,"Portuguese");
    int Idade;
    int Repetir;

    printf("\nInforme a idade a ser analisada, por favor.\n");
    scanf("%d",&Idade);

    if (Idade<16){
        printf("\nNão se pode votar com essa idade\n");
        sleep(1);
        goto Checar;
    }

    if (Idade==16){
        printf ("\nO voto com essa idade é facultativo\n");
        sleep(1);
        goto Checar;
    }

    if (Idade==17){
        printf ("\nO voto com essa idade é facultativo\n");
        sleep(1);
        goto Checar;
    }

    if (Idade>=65){
        printf("\nO voto com essa idade é facultativo\n");
        sleep(1);
        goto Checar;
    }

    if (18<=Idade<=64){
        printf ("\nO voto com essa idade é obrigatório\n");
        sleep(1);
        goto Checar;
    }

Checar:
    printf ("\nDeseja verificar mais alguma idade? \nDigite 1 para sim \nDigite 2 para não\n");
    scanf ("%d",&Repetir);

ConcertarEntrada:
    if (Repetir==2){
        printf("\nCerto, obrigado por utilizar o programa. Espero ter ajudado :D");
        sleep(5);
    }

    if (Repetir==1){
        goto Inicio;
    }

    if (Repetir>2){
        printf("\nEntrada inválida. Favor responder com os seguintes números: \n1 para sim \n2 para não\n");
        scanf ("%d",&Repetir);
        goto ConcertarEntrada;
    }


    return 0;
}


