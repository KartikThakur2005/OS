#include<unistd.h>

int main()
{
   char bf[10000];
    int n;
 n= read(1,bf,10000);
   write(0,bf,n);

}