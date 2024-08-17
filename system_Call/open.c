#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
  
    char bf[10000];

  int fd = open("test1.txt",O_RDONLY);

   int n= read(fd,bf,10000);

    write(1,bf,n);
}