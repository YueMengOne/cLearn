//
// Created by woyug on 2026/5/13.
//

/*
 * 变量分为：
 *  - 局部变量：{}内部定义的变量
 *  - 全局变量：{}外部定义的变量
 *
 *  当全局变量和局部变量名字相同的情况下，局部优先
 */

#include <stdio.h>

int b = 10;

int main() {
    int a = 100;

    printf("a = %d", a);

    return 0;
}