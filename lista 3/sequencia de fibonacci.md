### Biblioteca
```C
// fibonacci.h
#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <stdio.h>


int N;


int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}


void calcularFibonacci()
{

    printf("Digite o valor de N: ");
    scanf("%d", &N);


    printf("O %dº termo da sequencia de Fibonacci e: %d\n", N, fibonacci(N));
}

#endif
```
### Codigo (main)
```C
#include <stdio.h>
#include "biblioc.h"

int main() {
    calcularFibonacci();
    return 0;
}
```




