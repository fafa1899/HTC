# 1. 正文

HTCondor是威斯康星大学麦迪逊分校构建的分布式计算软件和相关技术，用来处理高通量计算（High Throughput Computing ）的相关问题。高通量计算中的Throughput应该是吞吐量的意思，也就是调度计算机资源的能力。与高性能计算（HPC）不同，高通量计算（HTC）应对的问题是在高性能的同时能够长时间稳定运行的能力，并充分利用集群或网络内计算资源。长时间计算时，集群或网络内计算资源往往是不可靠的，这中间蕴含了计算资源管理和任务调度的问题。

具体来说，HTC的思想就是将规模的密集运算拆分成一个个的子任务，交给集群计算机运算。HTCondor提供了如下功能：
1. 发布任务：根据设定的集群内计算资源条件，将任务发布到集群计算机。
2. 调度任务：任务能够发送到满足条件计算机中运行，或者迁移到另外一台计算机。
3. 监视任务：随时监视任务运行的情况和计算资源的情况。
注意拆分任务这一步还是需要用户自己控制的，拆分合适粒度的并行任务，有助于最大程度的负载均衡。

除此之外，一个不能忽视的的问题就是磁盘IO的问题。HTC往往伴随着海量数据，巨量数据的磁盘IO必定会造成性能瓶颈。HTCondor自带了一种文件传输机制，发布任务的时候能够自动将数据发送到对应的机器中运行。当然，也可以尝试搭配分布式文件系统如NFS或AFS进行计算。

准备在这一系列博文中，通过一个具体的实例，总结下HTCondor的使用过程，也算对分布式计算或者集群计算有个感性的认识。

# 2. 目录
1.[高通量计算框架HTCondor(一)——概述][netlink1]

简要介绍了高通量分布式计算与HTCondor。

2.[高通量计算框架HTCondor(二)——环境配置][netlink2]

详细展示了HTCondor环境的搭建过程。

3.[高通量计算框架HTCondor(三)——使用命令][netlink3]

介绍了HTCondor的使用环境，以及经常使用的命令。

4.[高通量计算框架HTCondor(四)——案例准备][netlink4]

准备一个实际案例做分布式计算。

5.[高通量计算框架HTCondor(五)——分布计算][netlink5]

使用一个实例进行简单的分布式计算。

6.[高通量计算框架HTCondor(六)——拾遗][netlink6]

总结了使用HTCondor过程中的一些问题与建议。

# 3. 参考
[1]. [说说高通量计算(HTC)、高性能计算(HPC)和多任务计算(MTC)](http://www.360doc.com/content/12/0514/00/21412_210833098.shtml)

[2]. [HTCondor官网](https://research.cs.wisc.edu/htcondor/)
[3]. [Hadoop到底是干什么用的?](https://www.zhihu.com/question/333417513)
[4]. [condor 使用详解](https://blog.csdn.net/nov_csdn/article/details/50442038)

# 4. 相关
[代码和数据地址](https://github.com/fafa1899/HTC)

[下一篇][netlink2]

[netlink1]:https://blog.csdn.net/charlee44/article/details/104018595
[netlink2]:https://blog.csdn.net/charlee44/article/details/104023264
[netlink3]:https://blog.csdn.net/charlee44/article/details/104077991
[netlink4]:https://blog.csdn.net/charlee44/article/details/104081453
[netlink5]:https://blog.csdn.net/charlee44/article/details/104083343
[netlink6]:https://blog.csdn.net/charlee44/article/details/104085090
