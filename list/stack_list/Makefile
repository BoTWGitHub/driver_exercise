KERNEL_PATH=~/Download/linux
CFILES := main.c
obj-m := sample.o

sample-objs := $(CFILES:.c=.o)

local-build:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

local-clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

cross-64bit-build:
	make -C $(KERNEL_PATH) M=$(PWD) ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- modules

cross-64bit-clean:
	make -C $(KERNEL_PATH) M=$(PWD) ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- clean
