//
// Created by woyug on 2026/5/17.
//
// 需求：给定两个长方形，判断谁的面积更大？如何定义函数？
// 1. 我定义函数，求长方形的面积
// 2. 需要什么才能完成？ （长/宽）
// 3. 调用的结果是否要继续使用
//
# include <stdio.h>

double getArea(double length, double width) {
    double area = length * width;
    return area;
}

int main() {
    // 调用函数求长方形的面积
    double area1 = getArea(10.0, 5.0);
    double area2 = getArea(20.0, 10.0);

    // 判断谁的面积更大
    if (area1 > area2) {
        printf("面积1大");
    }
    else if (area1 < area2) {
        printf("面积2大");
    }
    else {
        printf("面积一样大");
    }

    return 0;
}