### Biblioteca
```C
#ifndef BIBLIOC_H_INCLUDED
#define BIBLIOC_H_INCLUDED

int hora;

int saudacao() {
    if (hora >= 6 && hora <= 12) {
        printf("Bom dia\n");
    } else if (hora >= 13 && hora <= 18) {
        printf("Boa tarde\n");
    } else if ((hora >= 19 && hora <= 23) || (hora >= 0 && hora <= 5)) {
        printf("Boa noite\n");
    } else {
        printf("Valor invalido\n");
    }
    return 0;
}


#endif 
```
### Codigo (Main)
```C
#include <stdio.h>
#include <stdlib.h>
#include "biblioc.h"

int main() {
    printf("Digite a hora (0-23): ");
    scanf("%d", &hora);
    saudacao();
    return 0;
}

```


