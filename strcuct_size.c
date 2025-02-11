#include <stdio.h>

struct MyStruct {
    int a;
    char b;
    double c;
};

int main() {
    struct MyStruct *ptr1 = 0;
    struct MyStruct *ptr2 = ptr1 + 1; // Moving the pointer by 1 structure

    printf("Size of struct MyStruct: %ld bytes\n", (char*)ptr2 - (char*)ptr1);

    return 0;
}
