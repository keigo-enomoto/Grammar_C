/*
There are two types of pointa operator. 

  & : アドレス演算子  --> return the address of the vatriable

  * : 間接演算子     --> return the value of the address 


*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{

int x = 10 ;

printf("%p \n",&x);
// 0x7ffee70154dc 

printf("%d \n",*(&x));
// 10 


}