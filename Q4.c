#include<stdio.h>
#include<unistd.h> 
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd,len;
    fd=creat("test2.txt",0777);
    if(fd<0)
    {
        printf("File is not created\n");
    }
    fd=open("test2.txt",O_RDWR);
    char write_buf[100]="Example for testing  system calls is\0"; char read_buf[100], read_buf1[100];
    len=write(fd,write_buf,100);

    lseek(fd, 0, SEEK_SET); read(fd,read_buf,100); printf("The text which is read from file using read() is: %s\n",read_buf);
    lseek(fd, 10, SEEK_SET); read(fd,read_buf1,100); 
    printf("The text which is read from file using lseek is: %s\n",read_buf1);
    close(fd);
}
