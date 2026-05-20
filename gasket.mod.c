#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(gasket_disable_device, "", "");
KSYMTAB_FUNC(gasket_mm_unmap_region, "", "");
KSYMTAB_FUNC(gasket_enable_device, "", "");
KSYMTAB_FUNC(gasket_pci_add_device, "", "");
KSYMTAB_FUNC(gasket_pci_remove_device, "", "");
KSYMTAB_FUNC(gasket_platform_add_device, "", "");
KSYMTAB_FUNC(gasket_platform_remove_device, "", "");
KSYMTAB_FUNC(gasket_set_dma_device, "", "");
KSYMTAB_FUNC(gasket_num_name_lookup, "", "");
KSYMTAB_FUNC(gasket_reset, "", "");
KSYMTAB_FUNC(gasket_reset_nolock, "", "");
KSYMTAB_FUNC(gasket_get_ioctl_permissions_cb, "", "");
KSYMTAB_FUNC(gasket_wait_with_reschedule, "", "");
KSYMTAB_FUNC(gasket_register_device, "", "");
KSYMTAB_FUNC(gasket_unregister_device, "", "");
KSYMTAB_FUNC(gasket_interrupt_init, "", "");
KSYMTAB_FUNC(gasket_interrupt_msix_cleanup, "", "");
KSYMTAB_FUNC(gasket_interrupt_reinit, "", "");
KSYMTAB_FUNC(gasket_page_table_partition, "", "");
KSYMTAB_FUNC(gasket_page_table_map, "", "");
KSYMTAB_FUNC(gasket_page_table_unmap, "", "");
KSYMTAB_FUNC(gasket_page_table_map_dmabuf, "", "");
KSYMTAB_FUNC(gasket_page_table_unmap_dmabuf, "", "");
KSYMTAB_FUNC(gasket_page_table_unmap_all, "", "");
KSYMTAB_FUNC(gasket_page_table_are_addrs_bad, "", "");
KSYMTAB_FUNC(gasket_page_table_is_dev_addr_bad, "", "");
KSYMTAB_FUNC(gasket_page_table_max_size, "", "");
KSYMTAB_FUNC(gasket_page_table_num_entries, "", "");
KSYMTAB_FUNC(gasket_page_table_num_simple_entries, "", "");
KSYMTAB_FUNC(gasket_page_table_num_active_pages, "", "");
KSYMTAB_FUNC(gasket_sysfs_create_entries, "", "");
KSYMTAB_FUNC(gasket_sysfs_get_device_data, "", "");
KSYMTAB_FUNC(gasket_sysfs_put_device_data, "", "");
KSYMTAB_FUNC(gasket_sysfs_get_attr, "", "");
KSYMTAB_FUNC(gasket_sysfs_put_attr, "", "");
KSYMTAB_FUNC(gasket_sysfs_register_store, "", "");

SYMBOL_CRC(gasket_disable_device, 0x8db2d0a0, "");
SYMBOL_CRC(gasket_mm_unmap_region, 0x4d6efa5f, "");
SYMBOL_CRC(gasket_enable_device, 0xc457c684, "");
SYMBOL_CRC(gasket_pci_add_device, 0x9d8a8e95, "");
SYMBOL_CRC(gasket_pci_remove_device, 0x74683acc, "");
SYMBOL_CRC(gasket_platform_add_device, 0x732fa598, "");
SYMBOL_CRC(gasket_platform_remove_device, 0x160dad59, "");
SYMBOL_CRC(gasket_set_dma_device, 0x375b07f1, "");
SYMBOL_CRC(gasket_num_name_lookup, 0xbaa2668a, "");
SYMBOL_CRC(gasket_reset, 0xc559ec4f, "");
SYMBOL_CRC(gasket_reset_nolock, 0xcbc2d58f, "");
SYMBOL_CRC(gasket_get_ioctl_permissions_cb, 0x92a3274a, "");
SYMBOL_CRC(gasket_wait_with_reschedule, 0xa5a03f8a, "");
SYMBOL_CRC(gasket_register_device, 0xde271c86, "");
SYMBOL_CRC(gasket_unregister_device, 0x42ee1d59, "");
SYMBOL_CRC(gasket_interrupt_init, 0x4861aef2, "");
SYMBOL_CRC(gasket_interrupt_msix_cleanup, 0x7d1c979e, "");
SYMBOL_CRC(gasket_interrupt_reinit, 0xebcc4de8, "");
SYMBOL_CRC(gasket_page_table_partition, 0x4109757c, "");
SYMBOL_CRC(gasket_page_table_map, 0x9acf044a, "");
SYMBOL_CRC(gasket_page_table_unmap, 0x86ff0a89, "");
SYMBOL_CRC(gasket_page_table_map_dmabuf, 0x1d1491e0, "");
SYMBOL_CRC(gasket_page_table_unmap_dmabuf, 0xae1a17ce, "");
SYMBOL_CRC(gasket_page_table_unmap_all, 0x77311f6a, "");
SYMBOL_CRC(gasket_page_table_are_addrs_bad, 0xde46b89b, "");
SYMBOL_CRC(gasket_page_table_is_dev_addr_bad, 0x8a9ac533, "");
SYMBOL_CRC(gasket_page_table_max_size, 0x065f9c9d, "");
SYMBOL_CRC(gasket_page_table_num_entries, 0xc225208c, "");
SYMBOL_CRC(gasket_page_table_num_simple_entries, 0x8c92da47, "");
SYMBOL_CRC(gasket_page_table_num_active_pages, 0x38c3d415, "");
SYMBOL_CRC(gasket_sysfs_create_entries, 0x03181090, "");
SYMBOL_CRC(gasket_sysfs_get_device_data, 0x7d4baa3c, "");
SYMBOL_CRC(gasket_sysfs_put_device_data, 0x829998ce, "");
SYMBOL_CRC(gasket_sysfs_get_attr, 0x0436f42c, "");
SYMBOL_CRC(gasket_sysfs_put_attr, 0x437e2d93, "");
SYMBOL_CRC(gasket_sysfs_register_store, 0xbbbd9fa3, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xd915a9b6, "zap_vma_ptes" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x7a583f1c, "get_device" },
	{ 0xf2bd4a33, "dma_buf_attach" },
	{ 0x5414fb97, "__dynamic_dev_dbg" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x4d70d6c0, "dma_map_page_attrs" },
	{ 0x92997ed8, "_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf3096a19, "put_device" },
	{ 0x441d0de9, "__kmalloc_large_noprof" },
	{ 0xc85b1778, "pci_enable_msix_range" },
	{ 0x31eadc80, "dma_buf_map_attachment" },
	{ 0x1449bb6c, "const_pcpu_hot" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7c9fe565, "sysfs_create_link" },
	{ 0x8f14d45b, "get_zeroed_page_noprof" },
	{ 0xd5c75ec, "cdev_add" },
	{ 0xccf518ef, "device_create_file" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x98378a1d, "cc_mkdec" },
	{ 0x4c06cd6b, "_dev_err" },
	{ 0x9ac4f897, "dma_buf_unmap_attachment" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb4248686, "device_create" },
	{ 0x88d8fa3b, "class_create" },
	{ 0x7ef4bddc, "__sg_page_iter_next" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x52241e19, "dma_alloc_attrs" },
	{ 0x3e13c7b4, "dma_buf_get" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0xa5ef0d7, "dma_buf_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x950eb34e, "__list_del_entry_valid_or_report" },
	{ 0xde80cd09, "ioremap" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x139e7e58, "ns_capable" },
	{ 0xf65e2316, "__put_devmap_managed_folio_refs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfb578fc5, "memset" },
	{ 0x20630ecd, "_dev_warn" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x159f1989, "__get_task_comm" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe2a17b33, "dma_set_coherent_mask" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xfc37cbd5, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x792bc968, "__dma_sync_single_for_device" },
	{ 0x562dc30, "__sg_page_iter_start" },
	{ 0x88d49a6d, "__folio_put" },
	{ 0xde4eb81, "device_destroy" },
	{ 0x2cf56265, "__dynamic_pr_debug" },
	{ 0x2b6b3dec, "__kmalloc_cache_noprof" },
	{ 0xbee3ddd5, "vzalloc_noprof" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xae6a1cf7, "pci_disable_msix" },
	{ 0x6225d283, "dma_buf_detach" },
	{ 0x2771171a, "pci_match_id" },
	{ 0x3426ac54, "boot_cpu_data" },
	{ 0x2ceff6ad, "dma_mmap_attrs" },
	{ 0x40106aee, "dma_set_mask" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x77358855, "iomem_resource" },
	{ 0x4c45395c, "param_ops_int" },
	{ 0xc10e997, "eventfd_signal_mask" },
	{ 0xf9a482f9, "msleep" },
	{ 0x78d51764, "cdev_init" },
	{ 0x7c2db8bc, "kmalloc_caches" },
	{ 0x6e333cf0, "cdev_del" },
	{ 0x85bd1608, "__request_region" },
	{ 0x9980de42, "device_remove_file" },
	{ 0xd50cf42f, "d_path" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82dbe282, "get_user_pages_fast" },
	{ 0x7696f8c7, "__list_add_valid_or_report" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x52c5c991, "__kmalloc_noprof" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13127398, "task_active_pid_ns" },
	{ 0xc3d025d7, "dma_unmap_page_attrs" },
	{ 0xc07df91b, "class_destroy" },
	{ 0x96848186, "scnprintf" },
	{ 0xedc03953, "iounmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x73e0c446, "remap_pfn_range" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2e2ca37, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0563425C833D6827EA07C4A");
