## 第四周dobot课程课前任务布置

### Python

* 什么是[Python](https://www.python.org/) ？请解释Python命名来源.

* 什么是解释型语言？它与你正在学习的C语言有何不同之处？

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
