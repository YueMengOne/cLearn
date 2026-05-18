//
// Created by woyug on 2026/5/17.
//

#include <stdio.h>
#define NAME "GGIGATHINK, INC."
#define ADDRESS "101 Magabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

// 函数原型
void starbar(void);

int main(void){
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);

    // 使用函数
    starbar();

    return 0;
}

void starbar(void) {
    int count;
    for (count = 1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}
