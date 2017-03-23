#include <linux/unistd.h>
#include <linux/errno.h>
#include <linux/kernel.h>
#include <linux/sched.h>

asmlinkage long sys_ptree(void){
    printk("<0>Hello, I'm in Kernel");
    return 0;
}