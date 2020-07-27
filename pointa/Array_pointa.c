/*
When int a[4] = {1,2,3,4}; , a becomes the pointa of first value of this array 

Then || &a[i] = &a[0] + i = a + i ||
     || a[i]  = *&a[i]  = *(a + i)||

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{


int a[4] = {1,2,3,4} ;

printf("write address \n");
for(int i = 0; i<4; i++){
    printf("&a[%d]     %p \n",i,&a[i]);
    printf("&a[0] + %d %p \n",i,&a[0]+i);
    printf("a+%d       %p \n",i,a+i);
    printf("\n");
}

printf("------------------------------ \n");
printf("write value \n");
for(int i = 0; i<4; i++){
    printf("a[%d]   %d \n",i,a[i]);
    printf("*&a[%d] %d \n",i,*&a[i]);
    printf("*(a+%d) %d \n",i,*(a+i));
    printf("\n");
}

/* output

write address 
&a[0]     0x7ffeeab044c0 
&a[0] + 0 0x7ffeeab044c0 
a+0       0x7ffeeab044c0 

&a[1]     0x7ffeeab044c4 
&a[0] + 1 0x7ffeeab044c4 
a+1       0x7ffeeab044c4 

&a[2]     0x7ffeeab044c8 
&a[0] + 2 0x7ffeeab044c8 
a+2       0x7ffeeab044c8 

&a[3]     0x7ffeeab044cc 
&a[0] + 3 0x7ffeeab044cc 
a+3       0x7ffeeab044cc 

------------------------------ 
write value 
a[0]   1 
*&a[0] 1 
*(a+0) 1 

a[1]   2 
*&a[1] 2 
*(a+1) 2 

a[2]   3 
*&a[2] 3 
*(a+2) 3 

a[3]   4 
*&a[3] 4 
*(a+3) 4 
*/

}