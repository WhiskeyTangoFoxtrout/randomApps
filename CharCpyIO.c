/*Book work ifykyk
simple way of cpyn data(char)*/

#include <stdio.h>

main(){
//you have to int bc EOF might be a larger byte than char so you have to typecast int bc it  biggers
    int c;//type cast

    c = getchar();//1st instruction
    while (c != EOF){//conditon

        putchar(c);//display instruction
        c  = getchar();//while in the program you can keep displaying your shit
        
    }

    /*
    int d;
    while((c = getchar()) !=EOF)
        putchar(c);
    */    
    
}
