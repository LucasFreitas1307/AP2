### Biblioteca 

```C 
#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED

int N = 0;
int parzin() {
    printf("Digite um numero: \n");
    scanf("%d", &N);
   if (N % 2 == 0){
    printf("O numero e par!!\n\n");
   }
   else {
    printf("Numero e impar");

   }
getchar();
return 0;

}

#endif // BIBLIO_H_INCLUDED
```
### Codigo Principal (main)

```C
#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"

int main()
{
   printf("%d", parzin());
    return 0;
}
```
