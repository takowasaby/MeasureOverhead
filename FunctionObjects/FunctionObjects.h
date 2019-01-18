#include <functional>

class FuncObjFactory
{
private:
    class FuncObj
    {

    public:
        void operator() ();
    };
    class FuncObjInt
    {
    public:
        void operator() (int);
    };
public:
    FuncObj    func_obj();
    FuncObjInt func_obj_int();
    std::function<void()>    func_void();
    std::function<void(int)> func_void_int();
};