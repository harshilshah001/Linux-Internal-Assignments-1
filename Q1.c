#include<stdio.h>
#include<fcntl.h> #include<unistd.h>
int main()
{
	int fd,fd1;
	char write_buf[100]="Linux Internals Assignment Q-1\n", read_buf[100];  
	fd1=open("input1.txt", O_CREAT | O_RDWR, 0777); 			
	fd2=open("output1.txt",O_CREAT | O_RDWR, 0777);
	write(fd1,write_buf,100);
	read(fd1,read_buf,100);
	write(fd2,write_buf,100);
	close(fd1); close(fd2);
	return 0;
}
