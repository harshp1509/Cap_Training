#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include <fcntl.h>

int main(){
        int fd;
        char buff[1024];
        off_t offset;
        ssize_t br;

        fd=open("auther.txt",O_RDWR);
        if(fd==-1){
                perror("open");
                return 1;
        }

        br=read(fd,buff,1024);
        if(br==-1){
                perror("read");
                return 1;
        }

        char *name_ptr=strstr(buff,"Rohan");
        if(name_ptr==NULL){
                printf("name 'rohan' not found in file\n");
                return 1;
        }

        offset = name_ptr - buff;
        printf("%ld",offset);

        if(lseek(fd, offset, SEEK_SET)==-1){
                perror("lseek");
                return 1;
        }

        char new_name[]="Mohan";
        if(write(fd,new_name,strlen(new_name))==-1){
                perror("write");
                return 1;
        }
        close(fd);
        return 0;
}

