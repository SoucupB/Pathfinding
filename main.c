#include <stdio.h>

int main(int argc, char ** argv) {
    printf("Hello World\n");
}

#ifdef __cplusplus
extern "C" {
#endif

int square(int n) {
    return n * n;
}

int add(int a, int b) {
    return a + b;
}

#ifdef __cplusplus
}
#endif