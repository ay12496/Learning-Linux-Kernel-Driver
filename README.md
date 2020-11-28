# Learning-Linux-Kernel-Driver
1. Basic kernel module
    Build:  make
        ex_kernel_module.ko will be generated.
    run:
        sudo insmod ex_kernel_module.ko //to insert module into kernel
        lsmod // to list modules running in kernel
        sudo rmmod ex_kernel_module.ko //to remove module from kernel

    Install:
        you can use modules_install to compile and install module also.

    refer link: https://github.com/notro/rpi-source/wiki/Examples-on-how-to-build-various-modules

        