#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("Bo Lin");
MODULE_DESCRIPTION("Simple insert/remove driver without any other function");

static int hello_init(void)
{
	printk(KERN_ALERT "hello driver insert\n");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "hello driver remove\n");
}

module_init(hello_init);
module_exit(hello_exit);

