INCLUDEDIR :=/root/PXA255-pro/Kernel/linux-2.4.19-pro3_usb20/include
CROSS_COMPILE :=arm-linux-
CFLAGS := -D__KERNEL__ -DMODULE -Wall -O2 -I$(INCLUDEDIR)
CC=$(CROSS_COMPILE)gcc
LD=$(CROSS_COMPILE)ld
all:hello-module.o
hello-module.o:
	$(CC) $(CFLAGS) -c hello.c -o hello-module.o
clean :
	rm -f *.o
	rm -f device-module-test
