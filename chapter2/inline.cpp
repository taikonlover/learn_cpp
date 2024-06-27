/**
 * 内联函数：用函数代码代替函数调用 inline
 * 1. 经常小函数定义为内联函数
 * 2. 内联函数在调用前必须有完整的定义。
 * 3. 内联函数不能有复杂的结构，如含有 for,while,switch 等结构的复杂程序
 * 4. 递归函数是不能用来做内联函数的
 */

/**
 * namespace 命名空间
 * 1. 命名空间可以避免全局变量名冲突
 * NamespaceName::member 访问命名空间成员
 * using namespace NamespaceName; 引用全部成员
 * using NamespaceName::member; 引用指定成员
 *
 * 可以使用 ::存取全局变量 访问全局变量
 *
 * 全局变量、静态全局变量、静态局部变量 生存期从程序开始直到程序结束.
 */