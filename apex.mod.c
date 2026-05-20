#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x38c3d415, "gasket_page_table_num_active_pages" },
	{ 0xb3286d93, "kernel_param_lock" },
	{ 0x4c06cd6b, "_dev_err" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x42ee1d59, "gasket_unregister_device" },
	{ 0x3181090, "gasket_sysfs_create_entries" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7d1c979e, "gasket_interrupt_msix_cleanup" },
	{ 0x9d8a8e95, "gasket_pci_add_device" },
	{ 0xcbc2d58f, "gasket_reset_nolock" },
	{ 0xb890f4aa, "kernel_param_unlock" },
	{ 0x20630ecd, "_dev_warn" },
	{ 0x9b60c36f, "pci_set_master" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc457c684, "gasket_enable_device" },
	{ 0x25b9d605, "pci_bus_assign_resources" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x82e8d4f, "param_ops_bool" },
	{ 0x436f42c, "gasket_sysfs_get_attr" },
	{ 0x2b6b3dec, "__kmalloc_cache_noprof" },
	{ 0x829998ce, "gasket_sysfs_put_device_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x68fff7ee, "pci_disable_device" },
	{ 0x4c45395c, "param_ops_int" },
	{ 0x74683acc, "gasket_pci_remove_device" },
	{ 0xc225208c, "gasket_page_table_num_entries" },
	{ 0xebcc4de8, "gasket_interrupt_reinit" },
	{ 0xde271c86, "gasket_register_device" },
	{ 0x7c2db8bc, "kmalloc_caches" },
	{ 0x7d4baa3c, "gasket_sysfs_get_device_data" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xfa414f1c, "pci_enable_device" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa5a03f8a, "gasket_wait_with_reschedule" },
	{ 0x96848186, "scnprintf" },
	{ 0x5e76552e, "__pci_register_driver" },
	{ 0x8db2d0a0, "gasket_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x437e2d93, "gasket_sysfs_put_attr" },
	{ 0x5414fb97, "__dynamic_dev_dbg" },
	{ 0x86db45e1, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xe2e2ca37, "module_layout" },
};

MODULE_INFO(depends, "gasket");

MODULE_ALIAS("pci:v00001AC1d0000089Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BCFB09A9C4DC598D3A05A9C");
