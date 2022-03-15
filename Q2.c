#include<stdio.h>
#include<fcntl.h>
#include<unistd.h> #include<string.h>
int main()
{
    int fd, len, curr;
    char write_buf[100]="Hello\0", read_buf[100], read_buf1[100]; 
    fd=open("test1.txt",O_CREAT | O_RDWR, 0777);
    len=write(fd,write_buf,strlen(write_buf));
    lseek(fd, 7, SEEK_SET);

    curr=lseek(fd, 0, SEEK_CUR);
    printf("Current Position by using SEEK_SET is %d\n", curr); read(fd,read_buf,len); printf("Using SEEK_SET the string obtained: %s\n",read_buf);
    lseek(fd, -7, SEEK_END);

    curr=lseek(fd, 0, SEEK_CUR);
    printf("Current Position by using SEEK_END is %d\n", curr); 		read(fd,read_buf1,len); 
	printf("Using SEEK_END the obtained string is: %s\n",read_buf1); 
    close(fd);
    return 0;
}
