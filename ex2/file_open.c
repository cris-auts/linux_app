#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>




int main (int argc, char *argv[]){

    int fd;

    if(argc<2){
        perror("you haven't input the filename!please try again!\n");
        exit(EXIT_FAILURE);
    }
    
    fd=open(argv[1],O_CREAT|O_RDWR,0755);

    if(fd<0){
        
        perror("open file fail!\n");
        exit(1);
    }else{
        printf("open file: %d sucess!\n",fd);
    }

    close(fd);
    exit(EXIT_SUCCESS);
}
