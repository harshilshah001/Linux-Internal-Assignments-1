#include<stdio.h>
#include<unistd.h> 
#include<fcntl.h>
int main()
{
    char a[4096]="\0";
    int fd;
    fd=open("file.txt",O_CREAT | O_RDWR, 0777);
    if(fd<0)
    {
        printf("File is not created");
    }
    write(fd,a,4096);
    close(fd);
}
