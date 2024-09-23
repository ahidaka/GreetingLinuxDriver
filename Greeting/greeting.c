#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/sysfs.h>
#include <linux/kobject.h>

static int debug = 0;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "An integer");

static int __init greeting_init(void)
{
    printk(KERN_INFO "Greetings! debug=%d\n", debug);
    return 0;
}

static void __exit greeting_exit(void)
{
    printk(KERN_INFO "Goodbye!\n");
}

module_init(greeting_init);
module_exit(greeting_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A simple greeting module");
MODULE_VERSION("1.0");
