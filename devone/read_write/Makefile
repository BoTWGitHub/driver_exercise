LOCAL_KERNEL_PATH=/lib/modules/$(shell uname -r)/build
CROSS_KERNEL_PATH=~/Download/linux
CFILES := devone.c

obj-m += sample.o
sample-objs := $(CFILES:.c=.o)

local-build:
	make -C $(LOCAL_KERNEL_PATH) M=$(PWD) modules

local-clean:
	make -C $(LOCAL_KERNEL_PATH) M=$(PWD) clean

cross-64bit-build:
	make -C $(CROSS_KERNEL_PATH) M=$(PWD) ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- modules

cross-64bit-clean:
	make -C $(CROSS_KERNEL_PATH) M=$(PWD) ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- clean
