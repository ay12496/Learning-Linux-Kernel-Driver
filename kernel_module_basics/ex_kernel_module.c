#include<linux/kernel.h>
#include<linux/module.h>

static int __init ex_module_init(void)
{
 printk("ex module worked!\n"); //run dmesg, to see kernel logs
        return 0;
}

static void __exit ex_module_exit(void)
{       
 printk("Unloading ex module.\n"); 
        return;
}

module_init(ex_module_init);
module_exit(ex_module_exit);

MODULE_LICENSE("GPL");