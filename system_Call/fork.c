// #include<stdio.h>
// #include <unistd.h> 
// int main() 
// { 
//    fork();
//    fork();
// //    2^n  = 2^2 = 4;
//     printf("\nHEllo WOrld\n ");
//     fork();
//     fork();
//     // 2^n fork -- 2^3 =8;
//      printf("\nHEllo WOrld\n ");
// }

#include<stdio.h>
int main()
{
    if (fork() && (!fork()))
    {
         if(fork() || fork())
         {
            fork();
         }
    }

    printf("%d\n",getpid());
    return 0;
    
}