obj-m += hello.o

KDIR = /usr/src/linux-headers-5.8.0-45-generic


all:
	$(MAKE) -C $(KDIR) M=$(shell pwd) modules
	
clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.order
