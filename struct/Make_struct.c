/*----------------------------------------------------------------------------
How to define struct

struct _person {           // _person がタグ名 
    char name[20];         // 文字配列型のメンバ name 
    char sex;              // 文字型メンバ sex 
    int age;               // 整数型メンバ age 
    double height;         // 倍精度実数型メンバ height 
    double weight;         // 倍精度実数型メンバ weight 
};

struct _person p;      // p という名前の struct _person 型変数を宣言 

----------------------------------------------------------------------------
we can omit the type 'struct'

typedef struct _person{
    char name[20];
    .......
} _person 

This 'typedef' define 'struct _person' as '_person'

-------------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct Complex 
{
    double re ; //Real part 
    double im ; //Image part 

} Complex ;

void struct_print(Complex c ){
        printf("Real %lf \n",c.re);
        printf("Image %lf \n",c.im);
}

int main(void)
{

Complex c = {3.0, 4.0};

printf(" Real %lf \n",c.re);
printf(" Image %lf \n",c.im);

printf("use struct_print()\n");
struct_print(c);


}