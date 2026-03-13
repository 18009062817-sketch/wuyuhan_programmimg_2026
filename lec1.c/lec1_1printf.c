/*

#include<stdio.h>

int main(){
    printf("Hello World\n");
    return 0;
}

*/


/*
#include<stdio.h>
int main(){
    int a=97;
    printf("a %%d: %d\n",a);
    printf("a %%i: %d\n",a);
    printf("a %%c: %c\n",a);   //ASCLL码表中97对应字母97
    printf("a %%f: %f\n",(float)a);
    return 0;
}
*/



/*
#include<stdio.h>
int main(){
    char a='A';
    printf("a %%d: %d\n",a);
    printf("a %%i: %d\n",a);
    printf("a %%c: %c\n",a+32);   //大小字母相差32
    printf("a %%f: %f\n",(float)a);
    return 0;
}
*/



/*
#include<stdio.h>
int main(){
    char a=-3;
    printf("a %%d: %d\n",a);
    printf("a %%i: %d\n",a);
    printf("a %%c: %c\n",a);   //大小字母相差32
    printf("a %%f: %f\n",(float)a);
    printf("a %%u: %u\n",a);  //2的32次方=4294967296-3=4294967293 
    return 0;
}
*/

/*
int main(){
    unsigned char b = 'B';
    printf("b %%d: %d\n",b);
    printf("b %%i: %d\n",b);
    printf("b %%c: %c\n",b); 
    printf("b %%f: %f\n",(float)b);
    printf("b %%u: %u\n",b); 
    return 0;
}
*/

/*
int main(){
    char strc[5]= "abcd"; //假如要存储字符串"abcde"，需要定义char strc[6]，因为字符串末尾有一个'\0'结束符，始终多一个
    printf("strc %%d: %d\n",strc); //%d打印字符串地址
    printf("strc %%s: %s\n",strc); //%s打印字符串内容
    printf("strc %%c: %c\n",strc); //%c打印字符串首字符,但%c只能打印一个字符，所以只能打印字符串的首字符
    return 0;
}
*/


int main(){
    char strc[5]= "abcdefgh"; 
    printf("strc %%d: %d\n",strc); //字符串长度超过定义的数组长度，导致内存溢出，打印出乱码
    printf("strc %%s: %s\n",strc); //定义5个字符的数组，但实际存储了8个字符，只出现了前5个字符，后面3个字符被丢弃了
    printf("strc %%c: %c\n",strc); 
    return 0;
}

