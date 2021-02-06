#### 面向对象设计

##### class的两种经典分类

1. class without pointer
2. class with pointer

##### complex class 设计

~~~c++
#include<iostream>

class Complex {
public:
    Complex(double r, double i):re(r),im(i) /* _1_ */{}
    
    Complex& /*_3_*/operator+=(const Complex&); /* 就是 传递reference */
    
    double real() const /* _2_ */{ return re; }
    double imag() const { return im; }
    
    friend Complex& _doaplus(Complex* , const Complex&); 
    
    int func( const Complex &);
    
private:
    double re, im;
}

int Complex::func(const Complex &ob) {
    re += ob.re;
    im += ob.im;
}


int main() {
    
}


~~~

***总结*** :好的类的几点看点

1. 是否使用 列表初始化[^ cpp一个对象可以分为两个阶段，第一个是创建时的初始化，另外一个就是赋值（assignment）这两个不同。] __注释1__
2. __const function__ 告诉编译器，这个函数不会改变数据成员，如果后续用户需要使用_const class_ 也没有问题。[^如果未声明const function 然而用户却声明了const object，然后调用非const function，非const function说自己可能会改变数据成员。这两个就是自相矛盾，编译器不允许 。] __注释2__
3. __pass by value vs. pass by reference (to const) __ 尽量传递 ref const __注释3__
4.  __friend__可以自由提取我的__private__ [^相同class的各个object互为friend ]
5. 数据尽量private
6. 所有成员函数都隐含 ___this___指针 [^this指向调用者]
7.  ___cout<<object___ 操作符只会作用在左边的函数上。

___CONCLUDE___ 

以上都是针对普通class的设计要点。比如初始化列表，const, reference, member function， friend, 成员函数this指针，还有什么pass by ref or pass by value



##### String class 设计

```c++
#include<iostream>


Complex* pc = new Complex(1,2);
void* mem = operator new (sizeof(Complex));
pc = static_cast<Complex*>(mem);
pc->Complex::Complex(1,2); /* 隐含 */
Complex::Complex(pc,1,2); /* 谁调用，谁就是this所指 */

```

___BIG THREE___ 函数

_拷贝构造函数  拷贝赋值操作  析构函数_ 

1. __class with pointer members__ 必须有 copy ctor 和 copy op=

2.  ___operator=___ 左右赋值就很迷惑。-> _成员操作符重载带有this pointer

3. > 生命周期
   >
   > > 先分配Memory 再调用ctor， —— 使用结束—— 先调用 dtor, 再delete

4. new 16的倍数

5. new 的底层分配内存细节



##### static 类模板 函数模板及其他等

___static___ 特性

> static member 放在内存某处，但是不和其他object玩儿
>
> static function和 member function的区别在于 __是否隐含this Pointer__
>
> > 调用:
> >
> > a. object调用  b. class name调用
>
> static特性设计singleton设计模式实践，利用

补充 Singleton

```c++
class Ratio {
public:
    Ratio& getInstance();
private:
    Ratio() = default;
    Ratio(double rr = 0):_ratio(rr) {}
    double _ratio;
}

class singleton {
    public:
   	static singleton& getInstance( double);
    const double use() const;
   	private:
    const double _const_pp;
    double _pp;
    singleton(double cpp, double pp = 0): _const_pp(cpp),_pp(pp) {}
};

singleton& getInstance(double de){
    static res(de);
    return res;
}



```



___template___模板

___namespace___ 封装



--------

##### Object Orient Programming 

___Composition___ [^ 复合，表示has-a] 

> 1. 实心菱形表示
> 2. 从内存的角度看，就是 “回”，包含
>
> 2. _composition_ 下各对象析构和构造函数的表征
>
> > Key: 构造由内而外， 析构有外而内
> >
> > ```c++
> > Container::Container(...):Component() {}; // ctor 可以自己制定构造方法 但不能顺序
> > 
> > Container::~Container(...) {...～Component() }; // dtor
> > ```

___Delegation___ [^ 委托]. Composition By Reference.

> 1.  ```c++
>    //pointer to implement PIMPL(pimpl) Alias: Handle/Body 编译防火墙
>    //Copy on Write
>    
>    //String.h
>    
>    class string {
>        public:
>        somefunction();
>        
>        private:
>        sting_imp * ppp;
>    };
>    
>    
>    //stringIMP.cpp
>    
>    
>    
>     ```
>
> 2. sdfjakdslfj

___Inheritance___ [^ 继承 表示is-a] 

> 1. inheritance下如composition 一致
>
> 2. ````c++
>    
>    
>    
>    
>    
>    ````
>
> 3. asadsfasd

___Inheritance with virtual function___ 

> 成员函数的继承，不应该从内存角度考虑。derived class 能否调用 base class Member function

##### 设计模式

adapter

