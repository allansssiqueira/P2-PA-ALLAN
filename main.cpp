#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define tamanhodapalavra 50

char palavra[tamanhodapalavra];
char letraqueseratrocada;
char letraqueirasubstituila;
char palavraoriginal[tamanhodapalavra];
int contador=0;
int i;

char trocarletras (char letra);

char trocarletras(char letra)
  {
    char novaletra;

    if (letra==letraqueseratrocada)
    {
      novaletra=letraqueirasubstituila;
      contador=contador+1;
    }
    else
    {
      novaletra=letra;
    }
    return novaletra;
}

int main() 
{
  printf("Digite a palavra: \n");
  fgets (palavra,tamanhodapalavra,stdin);

  printf("Digite a letra que sera trocada: \n");
  std::cin>>letraqueseratrocada;

  printf("Digite a letra que ira substitui la: \n");
  std::cin>>letraqueirasubstituila;

  i=0;
  while (palavra[i] != '\0')
  {
    palavraoriginal[i]=palavra[i];
    palavra[i]=trocarletras(palavra[i]);
    i++;
  }
  printf("\n\n");

  printf("A palavra com as letras trocadas eh: %s", palavra);
 
  printf("A palavra original eh: %s", palavraoriginal);

  printf("Numero de substituicoes: %i", contador);

  printf("\n\n");
  return 0;
}