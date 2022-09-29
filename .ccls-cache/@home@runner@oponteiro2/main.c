#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maximoMinimo(int *v, int N, int *minimo, int *maximo) {
  int min = v[0];
  int max = v[0];
  for (int i = 0; i < N; i++) {
    if (v[i] > max) {
      max = v[i];
    } else if (v[i] < min) {
      min = v[i];
    }
  }
  minimo = min;
  maximo = max;
  printf("O menor numero e: %d\n", minimo);
  printf("O maior numero e:%d\n", maximo);
  return;
}

int main() {
  int N;
  int *v;
  int *minimo;
  int *maximo;
  printf("Valor de N: \n", N);
  scanf("%d", &N);
  v = (int *)malloc(N * sizeof(int));
  printf("Digite os valores do vetor: \n");
  for (int i = 0; i < N; i++) {
    scanf("%d", &v[i]);
  }
  maximoMinimo(v, N, minimo, maximo);
}