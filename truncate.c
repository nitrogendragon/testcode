#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>

int main(){
int fd = open("text.txt", O_RDWR);
if(fd == -1){
	perror("open");
	return -1;
}
off_t len = 12;
int ft = ftruncate(fd, len);
if(ft == -1){
	perror("truncate");
	return -1;
}
	
//printf("%s\n", );
return 0;
}