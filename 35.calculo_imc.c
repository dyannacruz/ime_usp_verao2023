#include <stdio.h>

void main() {
  float peso, altura, imc;

  printf("Informe o peso (kg):\n");
  scanf("%f", &peso);

  printf("\nInforme a altura (metros):\n");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  //printf("\nIMC = %.2f", imc);
  if (imc < 18.5)
     printf(" (magreza)");
  else if ((imc >= 18.5) && (imc < 25))
          printf(" (saudavel)");
       else if ((imc >= 25) && (imc < 30))
               printf(" (sobrepeso)");
            else if ((imc >= 30) && (imc < 35))
                    printf(" (obesidade grau I)");
                else if ((imc >= 35) && (imc < 40))
                        printf(" (obesidade grau II)");
		 else
		    printf(" (obesidade grau II)");
}