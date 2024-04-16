class X
{
public:
    X(const X &); // 常见的拷贝构造函数的原型, 必须是引用！默认拷贝构造函数按字节赋值
};

/*
X obj1;
以下情况会调用拷贝构造函数
X obj2 = obj1;
X obj3(obj1);
f(X o);
X f(){
return X;
}
 */