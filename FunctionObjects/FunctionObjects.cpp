#include "FunctionObjects.h"

FuncObjFactory::FuncObj FuncObjFactory::func_obj()
{
    return FuncObj();
}

FuncObjFactory::FuncObjInt FuncObjFactory::func_obj_int()
{
    return FuncObjInt();
}

std::function<void()> FuncObjFactory::func_void()
{
    return [](){ return; };
}

std::function<void(int)> FuncObjFactory::func_void_int()
{
    return [](int){ return; };
}