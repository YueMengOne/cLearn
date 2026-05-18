//
// Created by woyug on 2026/5/17.
//
// 系统自带函数 示例
//
# include <stdio.h>
# include <math.h>

int main() {
    /*
     * math.h 常用计算头文件
     *  - pow() 幂函数
     *  - sqrt() 平方根函数
     *  - ceil() 向上取整函数
     *  - floor() 向下取整函数
     *  - abs() 绝对值函数
     *
     *  time.h 时间头文件
     *   - time() 获取当前时间
     */

    // 1. 幂函数
    double a = pow(2, 3);
    printf("2的3次方 = %f\n", a);

    // 2. 平方根函数
    double b = sqrt(9);
    printf("9的平方根 = %f\n", b);

    // 3. 向上取整函数
    double c = ceil(3.1);
    printf("3.1向上取整 = %f\n", c);

    // 4. 向下取整函数
    double d = floor(3.9);
    printf("3.9向下取整 = %f\n", d);

    return 0;
}