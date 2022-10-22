/*3．编写一个C++程序，它使用3个用户定义的函数（包括main(
)），并生成下面的输出：
Three blind mice
Three blind mice
see how they run
see how they run
其中一个函数要调用两次，该函数生成前两行；另一个函数也被调
用两次，并生成其余的输出。*/
#include <iostream>
void fun_1();    
void fun_2();    //function prototype

int main()
{
    fun_1();    //call function
    fun_1();
    fun_2();
    fun_2();

    return 0;

}

void fun_1()
{
    std::cout << "Three blind mice" << std::endl;
}

void fun_2()
{
    std::cout << "see how they run" << std::endl;
}