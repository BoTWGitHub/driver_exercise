# Driver device open/close test code
## Install steps
1. Call `make` in the folder (Depends on your running kernel, you might need to adjust Makefile)
2. Install driver with `sudo insmod sample.ko`
3. You should see the major number with `cat /proc/devices | grep devone`
4. Make a device node `sudo mknod --mode=666 /dev/devone c $(major) $(minor)`

## Run test
1. Run `./simple` and check `dmesg`
2. Device should be opened and then be closed after 5s
3. Run `./simple & ./simple` and check `demsg`
4. You can see two programs opened device with same "inode" but different "file" address
5. Run `./fork` and check `dmesg`
6. The parent program call close_file but the device is not closed until all child programs call close_file

## Clean up
1. `sudo rm -i /dev/devone` and `y`
2. `sudo rmmod sample`
3. `make clean`