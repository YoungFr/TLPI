#include <stdio.h>

// 1. UNIX 的历史
// 
// 1969 - Ken Thompson 基于 MULTICS 在 Digital PDP-7 小型机上使用汇编
//        语言实现
// 1970 - AT&T 的工程师在 Digital PDP-11 小型机上使用汇编语言重新实现
// 1971 - UNIX 第一版
// 1973 - UNIX 第四版：几乎完全以 C 语言编写
// 1974 - UNIX 第五版：由于 AT&T 禁止涉及软件销售行业，从这一版开始高
//        校可以在支付象征性费用后使用 UNIX 系统，UNIX 开始获得极大的
//        普及和使用
// 1979 - UNIX 第七版：从该版本开始，UNIX 分裂为 BSD 和 System V 两大
//        分支
// 
// 1.1 BSD
// Ken Thompson 在 UC Berkeley 担任客座教授期间和研究生一起为 UNIX 开
// 发了许多新特性。这一称为 BSD 的 UNIX 版本在学术界发布颇广，还成为
// 一些商业 UNIX 系统（SunOS）实现的基石。
// 3BSD(1979) => 4.2BSD(1983) => 4.3BSD(1986) => 4.4BSD(1993)
//               ^^^^^^ 包含完整的 TCP/IP 实现
// 
// 1.2 System V
// 反托拉斯法案强制对 AT&T 进行拆分，AT&T 获准销售 UNIX。AT&T 对 UNIX
// 的增强称为 System V，这一变种后续也成为许多商业 UNIX 系统的基石。
// 
// 2. Linux 的历史
// 
// 2.1 GNU
// 从 1984 年开始，Richard Stallman 发起了 GNU 项目，目的是开发出一套
// 完整而又可自由获取，包含内核以及所有相关软件包的类 UNIX 系统。截止
// 到 20 世纪 90 年代早期，GNU 项目已经结出了大量硕果：GNU GPL、Emacs、
// GCC、bash shell 和 glibc。但仍然缺少能够有效运转的 UNIX 内核。
// 
// 2.2 Linux 内核
// 在 1991 年，芬兰学生 Linus Torvalds 为自己的 Intel80386 PC 开发了一
// 个操作系统。在发布后做到一呼百应，许多程序员一起为 Linux 添加了许多
// 新特性。
// 1.0(1994) => 1.2(1995) => 2.0(1996) => 2.2(1999) => 2.4(2001) => 2.6(2003)
int main() {
    printf("History\n");
}
