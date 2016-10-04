#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/fcntl.h>

int main(){
  int dev,i;
  char buff[1024];
  char *str[]={"on","off"};
  dev = open("/dev/virtual_device", O_RDWR);
  printf("dev:%d\n", dev);
  if(dev<0){
    printf("device open failed\n");
    return -1;
  }
  for(i=0;i<10;i++){
    strcpy(buff,str[i%2]);
    write(dev,buff,4);
    sleep(1);
  }
  write(dev, "1234", 4);
  read(dev, buff, 4);
  printf("read from device:%s\n", buff);
  close(dev);
  return 0;
}
