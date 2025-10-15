//
//  main.c
//  test4
//

#include <stdio.h>
#include <unistd.h>

int main(void) {
    
    int i;
    
    for (i=1; i<=10; i++) {
        printf("%0*d\n",6,i * i);
        printf("%05o\n", i * i);
    }
    
    printf("Slepice dělá %*.*s.\n", 30, 4, "kokokodák");
    return 0;
}
