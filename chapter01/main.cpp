#include <stdio.h>
#include <string>
#include <cstring>

using namespace std;

//
// Created by janvn on 18-9-1.
//

void LeftShiftOne(char* s,int n){
    //保存第一个字符
    char t = s[0];
    for(int i=1;i<n;i++){
        s[i-1] = s[i];
    }
    s[n-1] = t;
}

void LeftRotateString_1(char* s,int n,int m){
    while(m--){
        LeftShiftOne(s,n);
    }
}

void ReverseString(char* s, int from, int to){
    while(from < to){
        char t = s[from];
        s[from++] = s[to];
        s[to--] = t;
    }
}

void LeftRotateString_2(char* s,int n,int m){
    m %= n ;
    ReverseString(s,0,m-1);
    ReverseString(s,m,n-1);
    ReverseString(s,0,n-1);
}

void ReverseWords(char* s,int n){
    ReverseString(s,0,n-1);

    int i=0,j=0;
    for(i=0,j=0;j<n;j++){
        if(j==n||s[j+1]==' '){
            ReverseString(s,i,j);
            i=j+2;
        }
    }
}

int main(){
//    char s[]="abcdef";

    char s[]="I am a student.";
    int n = strlen(s);

    string origin_s= s;

    //LeftRotateString_1(s,6,3);    //第一种解法:蛮力移位
    //LeftRotateString_2(s,6,3);      //第二种解法：三步反转

    ReverseWords(s,n); //练习题
    printf("原始字符串：%s,翻转后的字符串：%s",origin_s.c_str(),s);

    return 0;
}