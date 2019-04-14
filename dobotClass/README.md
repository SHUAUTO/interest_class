## 第四周dobot课程课前任务布置

***注：非强制性任务，凭兴趣学习***

### 课前任务列表
* 安装Python到自己的电脑，备选安装教程：[菜鸟教程for Python](http://www.runoob.com/python/python-install.html)
* 了解Github,学习如何在本仓库提交issue.
* 了解Markdown书写语法，它将是你提交issue的书写工具.
* 熟悉一下Python的基本、简单语法.
 
### 课前习题

* 尝试在命令行界面交互式运行Python命令
* 什么是[Python](https://www.python.org/) ？请解释Python命名来源.
* 什么是解释型语言？Python与你正在学习的C语言有何不同之处？
* 请用你正在学习的c语言或者或者刚刚接触的Python语言实现一个简单的斐波那契数列（Fibonacci sequence）生成器。
* 接上题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（可以实用C语言或Python语言） Markdown支持代码块排版，详细请看语法。

*注：问题提交推荐以提Issue的方式提交到本仓库，当然，平时的学习问题也可以提Issue，看到了我会回复。*

## Bonus
你可以试试在本地运行下面的Python代码。
### 一行Python代码能做什么？

* 一行代码打印心形

```py
print('\n'.join([''.join([('ILoveYou'[(x-y)%8]if((x*0.05)**2+(y*0.1)**2-1)**3-(x*0.05)**2*(y*0.1)**3<=0 else' ')for x in range(-30,30)])for y in range(15,-15,-1)]))
```

* 一行代码打印迷宫

```py
print(''.join(__import__('random').choice('/\\') for i in range(50*24)))
```

* 一行代码打印九九乘法表

```py
print('\n'.join([' '.join(['%s*%s=%-2s' % (y,x,x*y) for y in range(1,x+1)]) for x in range(1,10)]))
```

* 一行代码打印Mandelbrot

```py
print('\n'.join([''.join(['*'if abs((lambda a:lambda z,c,n:a(a,z,c,n))(lambda s,z,c,n:z if n==0else s(s,z*z+c,c,n-1))(0,0.02*x+0.05j*y,40))<2 else' 'for x in range(-80,20)])for y in range(-20,20)]))
```
