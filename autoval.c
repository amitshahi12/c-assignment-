#include <stdio.h>

int main() {
    int x = 10; // 'x' is an auto variable by default

    {
        auto int y = 20; // 'y' is also an auto variable
        printf("Inside the block, y = %d\n", y);
    }

    // 'y' is no longer accessible here 
    printf("x = %d\n", x);

    return 0;
}