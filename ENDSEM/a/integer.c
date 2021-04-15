/* Name - Krishna Kumar Sutar
Roll no. - CED17I003*/
#include<linux/module.h>
static int count = 10;

int init_module(void)
{
    printk("module inserted\n");
    printk("count = %d\n",count);
    return 0;
}

void cleanup_module(void)
{
    printk("module removed\n");
}

module_param(count,int,0);
MODULE_LICENSE("GPL");