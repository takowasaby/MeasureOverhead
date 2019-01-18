#include "SimpleFunctions.h"
#include <string>


int func_int()
{
    return 0;
}

void action()
{
    return;
}
void action_int(int)
{
    return;
}
void action_int2(int,int)
{
    return;
}
void action_int3(int,int,int)
{
    return;
}
void action_int4(int,int,int,int)
{
    return;
}
void action_int5(int,int,int,int,int)
{
    return;
}
void action_int6(int,int,int,int,int,int)
{
    return;
}
void action_int7(int,int,int,int,int,int,int)
{
    return;
}
void action_int8(int,int,int,int,int,int,int,int)
{
    return;
}
void action_int9(int,int,int,int,int,int,int,int,int)
{
    return;
}
void action_int10(int,int,int,int,int,int,int,int,int,int)
{
    return;
}
void action_string(std::string)
{
    return;
}
void action_string5(std::string,std::string,std::string,std::string,std::string)
{
    return;
}

void ref_action(const int&)
{
    return;
}
void ref_action_int5(const int&,const int&,const int&,const int&,const int&)
{
    return;
}
void ref_action_string(const std::string&)
{
    return;
}
void ref_action_string5(const std::string&,const std::string&,const std::string&,const std::string&,const std::string&)
{
    return;
}

void ptr_action_int(int*)
{
    return;
}
void ptr_action_int5(int*,int*,int*,int*,int*)
{
    return;
}
void ptr_action_string(std::string*)
{
    return;
}
void ptr_action_string5(std::string*,std::string*,std::string*,std::string*,std::string*)
{
    return;
}

void mv_action_int(int&&)
{
    return;
}
void mv_action_int5(int&&,int&&,int&&,int&&,int&&)
{
    return;
}
void mv_action_string(std::string&&)
{
    return;
}
void mv_action_string5(std::string&&,std::string&&,std::string&&,std::string&&,std::string&&)
{
    return;
}

void not_overload_int(int i)
{
    return;
}
void not_overload_string(std::string str)
{
    return;
}
void overload(int i)
{
    return;
}
void overload(std::string str)
{
    return;
}
