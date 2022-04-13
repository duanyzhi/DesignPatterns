# c++ Design Patterns

## Singleton

作用：

保证一个类只有一个实例，由于是static的，所以全局访问的都是同一个对象。

用法:

* 注册全局的类型

限制:

由于单例的作用就是为了生成唯一的一个访问对象，所以 一般单例的实现放在.cc里。因为如果放在header文件中很可能会导致多个.cc文件都调用了含有单例的头文件，从而导致单例变成了多个。

参考:

https://refactoring.guru/design-patterns/cpp