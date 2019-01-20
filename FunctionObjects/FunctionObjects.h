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
    static FuncObj    func_obj();
    static FuncObjInt func_obj_int();
    static std::function<void()>    func_void();
    static std::function<void(int)> func_void_int();
};