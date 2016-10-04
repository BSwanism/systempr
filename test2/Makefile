INCLUDEDIR :=/root/PXA255-pro/Kernel/linux-2.4.19-pro3_usb20/include
CROSS_COMPILE:=arm-linux-
CFLAGS:= -D__KERNEL__ -DMODULE -Wall -O2 -I$(INCLUDEDIR)
CC=$(CROSS_COMPILE)gcc
LD=$(CROSS_COMPILE)ld
all: virtual_device.o virtual_device_app
virtual_device.o:
	$(CC) $(CFLAGS) -c virtual_device.c -o virtual_device.o
virtual_device.app: virtual_device_app.c
	$(CC) -o virtual_devce_app virtual_device_app.c

clean :
	rm -f *.o
	rm -f virtual_device_app
