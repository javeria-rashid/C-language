/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
void main()
{
    int i=0;
    while(i<=10)
    {
        int tb=2;
        int num=i*tb;
        
        printf("%d\t%d\t%d\n\n", tb, i, num);
        i++;
    }
}
