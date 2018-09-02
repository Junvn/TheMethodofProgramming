#include <stdio.h>
#include <string>
#include <cstring>
#include "stringReverse.h"

using namespace std;

int main(){

    // ===================== 1.1 字符串的旋转===============================
    char s[]="abcdef";
    // char s[]="I am a student.";

    int n = strlen(s);

    string origin_s= s;

    LeftRotateString_1(s,6,3);    //第一种解法:蛮力移位
    //LeftRotateString_2(s,6,3);      //第二种解法：三步反转

    //ReverseWords(s,n); //练习题
    printf("原始字符串：%s,翻转后的字符串：%s",origin_s.c_str(),s);
    // ===================== 1.1 字符串的旋转===============================

    return 0;
}

