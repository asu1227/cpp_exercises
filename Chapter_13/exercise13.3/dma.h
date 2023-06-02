/*修改baseDMA-lacksDMA-hasDMA类层次，让三个类都从一个
ABC派生而来，然后使用与程序清单13.10相似的程序对结果进行测
试。也就是说，它应使用ABC指针数组，并让用户决定要创建的对象类
型。在类定义中添加virtual View( )方法以处理数据显示。*/
#ifndef DMA_H
#define DMA_H
#include <iostream>

class DmaABC
{
private:
    char * label;
    int rating;
// protected:
//     struct Formatting
//     {
//         std::ios_base::fmtflags flag;
//         std::streamsize pr;
//     };
//     const std::string & Label() const {return label;}
//     int Rating() const {return rating;}
//     Formatting SetFormat() const;
//     void Restore(Formatting & f) const;
public:
    DmaABC(const char * l = "null", int r = 0);
    DmaABC(const DmaABC &);     //
    virtual ~DmaABC() = 0;
    virtual void View() const;
    DmaABC & operator=(const DmaABC &);
    friend std::ostream & operator<<(std::ostream & os, const DmaABC & a);
};

class baseDMA : public DmaABC
{
private:
public:
    baseDMA(const char * l = "null", int r = 0);
    // baseDMA(const baseDMA & rs);                                          
    // baseDMA & operator=(const baseDMA & rs);
    // virtual ~baseDMA() {}; 
    // virtual void View();
    friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};

class lacksDMA : public DmaABC
{
private:
    enum { COL_LEN = 40 };
    char color[COL_LEN];

public:
    lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
    lacksDMA(const char * c, const DmaABC & a);
    // use implicit copy constructor
    // use implicit assignment operator
    virtual void View() const;
    friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
};

class hasDMA : public DmaABC
{
private:
    char * style;

public:
    hasDMA(const char * s = "none", const char * l = "null", int r = 0);
    hasDMA(const char * s, const DmaABC & a);
    hasDMA(const hasDMA &);
    ~hasDMA();
    virtual void View() const;
    hasDMA & operator=(const hasDMA & rs);
    friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};

#endif