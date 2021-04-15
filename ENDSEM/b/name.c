/* Name - Krishna Kumar Sutar
Roll no. - CED17I003*/

#include<linux/module.h>

int init_module(void)
{
    printk("module inserted\n");
    printk("My Name is Krishna Kumar Sutar\n");
    return 0;
}

void cleanup_module(void)
{
    printk("module removed\n");
}

MODULE_LICENSE("GPL");