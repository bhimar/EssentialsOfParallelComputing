#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i;
    if (argc <= 1){
        printf("Invalid input, provide a number >= 0");
        return 1;
    }
    i = atoi(argv[1]);
    if (i == 0) {
        printf("0");
        return 0;
    } else if (i == 1) {
        printf("1");
        return 0;
    }

    int f0 = 0;
    int f1 = 1;
    int fn;
    for (int j = 2; j <= i; j++) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    printf("%d", fn);
}