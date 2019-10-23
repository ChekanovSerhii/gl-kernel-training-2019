#include <linux/init.h>		// Macros used to mark up functions  __init __exit
#include <linux/module.h>	// Core header for loading LKMs into the kernel
#include <linux/kernel.h>   // Contains types, macros, functions for the kernel

static int __init hello_init( void ) { 
      printk( KERN_DEBUG "Hello, world!" ); 
      return 0; 
} 

static void __exit hello_exit( void ) { 
      printk( KERN_DEBUG "Goodbye, world!" ); 
} 


module_init( hello_init ); 
module_exit( hello_exit );

MODULE_AUTHOR( "Serhii Chekanov" ); 
MODULE_DESCRIPTION("A simple Linux driver.");  
MODULE_VERSION("0.1");
MODULE_LICENSE( "GPL" );
