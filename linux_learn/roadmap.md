Linux 编程学习

 



第一阶段 C语言



Week1 



C语言的基本数据类型



数据的编码表示



各种进制变换



C语言的13种类型运算符及表达式



选择循环结构程序设计



一维二维数组存储原理及灵活使用



指针的本质，指针的偏移与传递



一级指针，二级指针



函数的使用



函数内不同变量的作用域及有效期



 



Week2 



结构体，联合体，枚举



链表的增删改查



二叉树、红黑树



八大基本排序算法



qsort的用法演示



索引式排序，索引本质



文件的打开，关闭，读写，偏移



项目实战



​       a. 学生管理系统             b. 编译器的实现



 



#### 第二阶段 Linux服务器开发

##### Week3 

Linux的发展历史

Linux下的常用shell命令

​           a. 用户创建配置

​           b. 文件及目录增删查

​           c. 权限变更

​           d. 文件内容查找

​           e. 磁盘内存查看

Vim编辑器的使用

GCC，GDB编译调试工具链

静态库和动态库的生成，调用

Makefile工程管理器

Git版本控制系统

Linux文件操作编程

[文件空洞设计](https://lrita.github.io/images/posts/filesystem/Linux_File_Hole_And_Sparse_Files.pdf)

[mmap文件映射](https://www.cnblogs.com/huxiao-tee/p/4660352.html)高效操作文件 [mmap wiki](https://en.wikipedia.org/wiki/Mmap) [文件映射详解](https://www.cnblogs.com/huxiao-tee/p/4660352.html)

> [从内核文件看内核文件读写过程](https://www.cnblogs.com/huxiao-tee/p/4657851.html)



使用管道文件通信

select多路复用

VFS文件系统原理

iNode与Dentry存储原理

##### Week4 

Linux下的进程管理

进程的创建，退出，资源回收

进程的调度: RSTZ等状态的变化

进程间通信的方式

​          a. 标准流管道

​          b. 无名管道

​          c. 有名管道编程

​          d. 共享内存

​          e. 信号量

​          f. 信号

##### Week5 

Linux下的多线程原理

线程的创建，退出，资源回收等

线程的取消

​          a. 取消失败分析

​          b. 异步取消的资源清理等

线程的互斥，互斥锁

线程的同步，条件变量

可重入函数，不可重复函数

计算机网络概述

wireshark的使用

网络协议之TCP、UDP解析

套接字Socket编程基本原理

通过Socket实现TCP、UDP通信

##### Week6 

epoll多路复用讲解，实现原理，并发处理等

Socket结合epoll实现即时通信，文件传输等

进程池模型讲解，通过进程池实现文件的并行下载

线程池模型讲解，通过线程池实现文件的并行下载

关系型数据库概述

数据库MySQL的安装配置

SQL语言的学习

​         a. 数据库的创建、销毁



​         b. 表的创建、修改、销毁



​         c. 单表查询操作



​         d. 多表查询操作



通过MySQL编程接口连接MySQL服务器



数据库查询优化操作



MySQL索引的类型，索引的内部实现原理



数据结构之B+树



 



 



##### Week7  项目实践之文件服务器(功能匹配百度网盘)



 



​         a. 用户注册，登录验证



​         b. 文件查看，上传，下载，删除



​         c. 下载提速，断点续传，多点下载等功能



​         d. 实现不同用户相同文件秒传功能



​         e. 文件授权查看功能，类似百度网盘分享



面试补充



​         a. 软件测试相关讲解



​         b. 加密算法解析



​         c. http协议解析



​         d. 负载均衡，反向代理



 



#### 第三阶段 C++基础篇4周

##### Week8 



C++语言的发展历史



C++与C语言的差别



C++风格字符串std::string



类的定义及三种访问修饰符



对象的创建和销毁



对象的复制控制



特殊的数据成员和成员函数



设计模式之单例模式



new/delete表达式扩展



容器之vector



C++输入输出流



日志系统log4cpp的学习



 



##### Week9 



友元函数、友元类



C++运算符重载



全局类，嵌套类，局部类



设计模式之Pimpl



单例模式Singleton的自动释放



写时复制(COW)技术详解



设计模式之代理模式



xml文件解析(开源库TinyXml2)



正则表达式匹配字符串(开源库Boost.Regex)



面向对象之继承



​         a. 继承的定义



​         b. 派生类对象的创建和销毁



​         c. 多基派生或多重继承



​         d. 基类与派生类对象间的转换



​         e. 派生类对象间的复制控制



##### Week10 



面向对象之多态



​         a. 虚函数的实现原理



​         b. 虚函数的访问



​         c. 纯虚函数，抽象类



​         d. 测试虚表的存在



​         e. 多重继承时的内存布局



​         f. 虚拟继承



​         g. 菱形继承的内存布局



容器之set,map的使用



C++11新特性之移动语义



资源管理之RAII技术，智能指针



数据格式之JSON字符串解析



面向对象设计原则，UML，类图



 



 



##### Week11 



泛型编程，模板，函数模板，类模板



标准模板库STL总体概述



STL六大组件



 



​         a. 容器



​         b. 迭代器



​         c. 适配器



​         d. 算法



​         e. 函数对象



​         f. 空间配置器



STL迭代器源码剖析



STL空间配置器底层源码剖析



实现自定义Vector类



设计模式之工厂模式，观察者模式



 



#### 第四阶段 C++进阶篇1周



##### Week12 



使用C++封装POSIX线程



生产者-消费者问题，互斥锁，条件变量，线程



线程池封装



并发服务器模型详解，socket编程



TCP协议，同步/异步，阻塞/非阻塞



IO复用模型，网络IO模型



Reactor模式、Proactor模式特点



网络库TcpServer框架实现



Linux下timerfd/eventfd封装



 

#### 第五阶段 C++项目开发篇2周



##### Week13 项目一：文本纠错



使用IO流创建词典和索引文件



将线程池与网络库结合起来搭建服务器框架



根据业务逻辑响应客户端的请求



为了提高程序的查询效率，实现缓存系统



使用分词库cppjieba处理中文



 



Week14 



项目二: 基于RSS的内容定制化搜索引擎



搜索引擎概述



使用开源库log4cpp处理日志



基于RSS文件建立网页库,网页偏移库



采用TF-IDF算法建立倒排索引库



采用余弦相似度算法对网页进行排序



根据查询词自动生成文档摘要



将计算结果打包成JSON数据报返回给客户端



 

最终篇（就业及面试）



Week15(2天)



就业指导

​         a. 心态篇



​         b. 简历制作篇



​         c. 面试准备篇



​         d. 面试之技术篇



​         e. 面试之HR篇



​         f.  面试之收获offer篇



往期道友分享