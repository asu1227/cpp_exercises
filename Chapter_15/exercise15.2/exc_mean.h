#ifndef EXC_MEAN_H
#define EXC_MEAN_H

#include <stdexcept>

class bad_hmean : public std::logic_error
{
public:
    bad_hmean() : std::logic_error ("hmean error: hmean() invalid arguments: a = -b\n") {}      //
                                            // 使用列表初始化来初始化bad_hmean类
};

class bad_gmean : public std::logic_error
{
public:
    bad_gmean() : std::logic_error ("gmean error: gmean() arguments should be >= 0\n") {} //
                                            // 使用列表初始化和基类构造函数来初始化bad_gmean类构造函数
};

#endif

