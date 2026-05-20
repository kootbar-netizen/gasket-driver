# Google Coral PCIe Driver (Gasket) for Linux 6.x+

[简体中文](#简体中文) | [English](#english)

---

## 简体中文

本仓库是 Google 官方 `gasket-driver` 的修复分支，专门解决了在 **Linux 6.x（包括 Linux 6.12+）** 新内核下编译时因 `no_llseek` 导致的报错问题。适用于在 Debian/Ubuntu 等系统下为 Frigate 等服务点亮 Coral PCIe 加速卡。

### 🚀 极简安装流程

请在服务器的 `root` 权限下，直接复制执行以下命令：

```bash
# 1. 补全系统环境变量（防止 Debian 提示找不到命令）
export PATH=$PATH:/sbin:/usr/sbin:/usr/local/sbin

# 2. 清理旧目录并克隆本纯净仓库
cd /root && rm -rf gasket-driver
git clone [https://github.com/kootbar-netizen/gasket-driver.git](https://github.com/kootbar-netizen/gasket-driver.git)

# 3. 编译驱动
cd gasket-driver
make clean && make

# 4. 手动将驱动塞入当前内核目录
mkdir -p /lib/modules/$(uname -r)/kernel/drivers/misc/
cp gasket.ko apex.ko /lib/modules/$(uname -r)/kernel/drivers/misc/

# 5. 刷新依赖并加载驱动
depmod -a
modprobe gasket && modprobe apex

# 6. 验证硬件是否成功亮起
ls -l /dev/apex_*
```
> 💡 **成功标志：** 如果终端输出中出现 `/dev/apex_0`，说明驱动已完美加载！随后即可重启你的 Frigate 容器。

---

## English

This repository is a patched fork of the official Google `gasket-driver`. It specifically fixes the compilation error caused by `no_llseek` under **Linux 6.x (including Linux 6.12+)** modern kernels. It is used to enable Coral PCIe accelerators on Debian/Ubuntu systems for services like Frigate.

### 🚀 Quick Installation

Run the following commands with `root` privileges:

```bash
# 1. Fix environment PATH for Debian/Ubuntu systems
export PATH=$PATH:/sbin:/usr/sbin:/usr/local/sbin

# 2. Clean old directory and clone this clean repository
cd /root && rm -rf gasket-driver
git clone https://github.com/kootbar-netizen/gasket-driver.git

# 3. Compile the driver
cd gasket-driver
make clean && make

# 4. Manually copy drivers to the current kernel directory
mkdir -p /lib/modules/$(uname -r)/kernel/drivers/misc/
cp gasket.ko apex.ko /lib/modules/$(uname -r)/kernel/drivers/misc/

# 5. Refresh dependencies and load modules
depmod -a
modprobe gasket && modprobe apex

# 6. Verify the hardware device
ls -l /dev/apex_*

```

> 💡 **Success Indicator:** If you see `/dev/apex_0` in the terminal output, the driver is successfully loaded! You can now restart your Frigate container.

```

```
