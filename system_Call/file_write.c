#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    
    
         int fd = open("blank.txt",O_WRONLY|O_APPEND);

         char bf[10000];

         int n = read(0,bf,10000);

         write(fd,bf,n);


    
}