KERNEL_PATH=~/Download/linux
CFILES := devone.c

obj-m += sample.o
sample-objs := $(CFILES:.c=.o)

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

cross_build:
	make -C $(KERNEL_PATH) M=$(PWD) ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- modules

cross_clean:
	make -C $(KERNEL_PATH) M=$(PWD) ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- clean
