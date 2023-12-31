# C语言程序设计考前答疑课
## Part1: C语言程序设计课程知识梳理
### 结构体
- 定义、声明方式
- 使用方法
    - 访问结构体成员:两种方式
        - 指针访问（recommanded:便于使用高级数据结构）
        - 变量访问
- 结构体对齐

- 单链表
>
    - 规范
        - 节点
        - 链表：链表头，节点，表尾
    - 基本操作 
        - 取值
        - 添加节点
        - 删除节点
        - 反转链表
        - 局部反转*
        - 打印
        - 释放
    - 特性：
        - 存储空间不连续
        - 不需要事先估计空间
        - 访问方式，链表没有下标，需要逐个访问
        - 单向性！
    
    - 要点：
        1. 善用debugger查看链表，加深理解
        2. 设计算法时注意单链表的单向性，预留操作空间
        3. 链表本身是相当灵活的数据结构，善用链表本身的特性，避免使用额外空间
        4. 使用链表作为函数参数时，注意传入的链表是链表头还是索引为0的节点
        5. 多想几步，多想一想极端情况
### 在Dev-Cpp中debug
注意⚠️：Dev-Cpp是早已停止更新，机房使用的Dev-Cpp 4.9.2是2005年发布的，其内置的gcc编译器最新只支持到c99标准（默认不开启），一般用作怀旧或者初学者第一次写C语言，其部分功能可能和现代的操作系统不适配。使用Dev-Cpp时，**如果你确信你的操作是正确的，重复多几次同样的操作**，要随机应变，多多想想这是不是唯一的操作。  
- 切换C标准：“工具”->“编译器选项”->“代码生成/优化“->“代码生成”->“语言标准”->“ISO C99”
    >备用方案：“工具”->“编译器选项”->“编译器“->“编译时加入一下命令”->`-std=c99`
- GCC release和GCC debug:**实际调试不会给你带来影响**
    >GCC release编译得到的程序不带调试信息，需要重新编译加上调试信息
- Debug：
    - 断点设置
    - 查看变量
        - 查看指针变量
        - 查看指针指向的变量
        - 查看变量的地址
        - E.g:查看链表
    - `next`和`step in`
    - 常见错误判断：
        - 内存溢出
        - 函数、结构体声明
        - 其它想象不到的愚蠢错误
    - 如何不使用devc进行debug
### 函数声明
为什么一定要在引用函数前声明函数头？
- 编译器的工作流程是怎么样的？
    1. 前处理（C语言文本文件 -> 整理过的C语言文本文件）
    2. 编译（C语言文本文件 -> 汇编语言文本文件）
    3. 汇编（汇编语言文本文件 -> 二进制可重定位目标文件）
    4. 链接（单/多个二进制可重定位目标文件 -> 可执行文件）

- 链接，多文件编程和编译
    - 在链接步骤前，所有的源码都已经编译为了类似于`*.o`的“可重定位目标文件(reloacatable object file)“，每个可重定位目标文件内都有一个符号表(Symbal table)，里面包含了该程序声明的函数和全局变量的相关信息，**如果一个函数没有被声明而直接使用，将被定义为`int func()`**
    - 每一个**符号(Symbol)** 对应一个函数/全局变量**引用**，并指向对应的地址
    - 执行Link步骤时，编译器根据符号表的信息，**重定位(relocation)** 这些函数/全局变量，即将**符号**指向相应的地址，链接器将**不加甄别地**使用编译器产生的符号信息来进行重定位
    - 如果定位不到，将无法链接。
- 很久以前，没有声明的函数如会被默认视为`int func()`，如果函数没有声明直接使用，还可以编译到`重定位目标文件`这一步，然后链接器（Linker）报错，但现代编译器会直接报错
### 字符串和string库
### 格式化输入输出
