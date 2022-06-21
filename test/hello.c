#include <linux/module.h>
#include <linux/init.h>
#include <linux/moduleparam.h>
/* Meta Information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Moatasem ");
MODULE_DESCRIPTION("A hello world Psuedo device driver");

int cnt = 0;
module_param(cnt, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(cnt, "An integer");

static int __init hellodriver_init(void)
{
    int i = 0;
    for (i = 0; i < cnt; i++)
        printk("hello world\n");
    return 0;
}
static void __exit hellodriver_exit(void)
{
    int i;
    for (i = 0; i < cnt; i++)
        printk("good bye\n");
}
module_init(hellodriver_init);
module_exit(hellodriver_exit);
// lsmod
// insmod # modprobe
// rmmod
// modinf