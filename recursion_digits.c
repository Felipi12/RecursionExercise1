#include<stdio.h>

int Digitos(int N){

  if(N < 10)
    return 1;
  else
    return 1 + Digitos(N/10);

}


int main(){
    int num1;

    printf("Digite um numero inteiro: ");

    scanf("%d", &num1);

    printf("Resultado: %d",Digitos(num1));
}
