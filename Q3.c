#include<stdio.h>
#include<fcntl.h>
#include<unistd.h> 
#include<sys/stat.h>
int main()
{
    struct stat st;
    stat("q_1.c",&st);
    printf("File Size: %lu\n", (st.st_size)); 
    printf("File inode: %lu\n", (st.st_ino)); printf("Size disc of blocks: %lu\n",st.st_blksize);
    return 0;
}