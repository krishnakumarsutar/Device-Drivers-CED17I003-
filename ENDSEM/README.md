# FINAL PRACTICE EXAM
(a) Write a module that can take an integer parameter when it is loaded with insmod command.

AND

(b) Write a module which prints your name in log.

# Overview
## (a) 
Kernel modules can be passed command line arguements during module insertion just like application can have command line arguements. However in kernel it is slightly different kernel provides **module_param** API for command line parameters.Here during insertion of the module we pass a integer as command line arguement and we can view that number in kernel log. Also if you don't pass any integer arguements it would print default initialized integer value.

**module_param(name, type, permission)** : This is a macro that takes three parameters, the first one is name, the second is type of command line parameter which can be int,uint,byte,short etc and the third specifies the permissions to change command line parameter value via sys file system.

In order to compile and build the integer module; we need to create a Makefile.
```
krishna@krishna:~/Desktop/DD/ENDSEM/a$ make
```
This commmand is used to compile the souce code integer.c to create a module called integer.ko with integer parameter as shown below
```
krishna@krishna:~/Desktop/DD/ENDSEM/a$ sudo insmod integer.ko count=115
```
This command will call init_module() which is called when the module is inserted into the kernel or loaded to the kernel and pass the command line parameter.
```
krishna@krishna:~/Desktop/DD/ENDSEM/a$ sudo rmmod integer.ko
```
This command will call cleanup_module() which is called just before the module is unloaded from the kernel.
# Ouput(a)
![Screenshot](output(a).JPG)
This is kernel log when module is loaded printing the message.

## (b)
# Overview
We have implemented name.c program which will be compiled as a kernel module. This module will print my name as kernal log when we load the module and will also print a message and then unloaded the module.
```
krishna@krishna:~/Desktop/DD/ENDSEM/b$ make
```
This commmand is used to compile the souce code name.c to create a module called name.ko
```
krishna@krishna:~/Desktop/DD/ENDSEM/b$ sudo insmod name.ko
```
This command will call init_module() which is called when the module is inserted into the kernel or loaded to the kernel.
```
krishna@krishna:~/Desktop/DD/ENDSEM/b$ sudo rmmod hello.ko
```
This command will call cleanup_module() which is called just before the module is unloaded from the kernel.
# Ouput
![Screenshot](output(b).JPG)
This is kernel log when module is loaded printing the message.