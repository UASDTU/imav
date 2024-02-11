#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x95f28b28, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd8b56642, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x3d492ed7, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x4f3c7b18, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xfcea68d6, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa1c864c4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd2859a20, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xaec9dbd2, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5332734c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x64706f53, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xecfaf437, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x5cba459e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb834953a, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfd25106f, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x1fdc7df2, __VMLINUX_SYMBOL_STR(_mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1E0Ep9025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1E0Ep9001d*dc*dsc*dp*ic*isc*ip*in*");
