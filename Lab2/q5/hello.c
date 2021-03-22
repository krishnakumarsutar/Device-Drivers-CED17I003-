#include <linux/module.h>     /* Needed by all modules */ 
#include <linux/kernel.h>     /* Needed for KERN_INFO */ 
#include <linux/init.h>       /* Needed for the macros */
  
static int hello_init(void) 
{ 
    printk(KERN_ALERT "Inserting the module to the kernel.\n");
    return 0; 
} 
  
static void hello_exit(void) 
{ 
    printk(KERN_ALERT "Unloading the Module from the kernel.\n"); 
} 
  
module_init(hello_init); 
module_exit(hello_exit); 
