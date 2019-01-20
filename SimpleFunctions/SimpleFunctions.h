#include <string>

int func_int();

void action();
void action_int(int);
void action_int2(int,int);
void action_int3(int,int,int);
void action_int4(int,int,int,int);
void action_int5(int,int,int,int,int);
void action_int6(int,int,int,int,int,int);
void action_int7(int,int,int,int,int,int,int);
void action_int8(int,int,int,int,int,int,int,int);
void action_int9(int,int,int,int,int,int,int,int,int);
void action_int10(int,int,int,int,int,int,int,int,int,int);
void action_string(std::string);
void action_string5(std::string,std::string,std::string,std::string,std::string);

void ref_action(const int&);
void ref_action_int5(const int&,const int&,const int&,const int&,const int&);
void ref_action_string(const std::string&);
void ref_action_string5(const std::string&,const std::string&,const std::string&,const std::string&,const std::string&);

void ptr_action_int(int*);
void ptr_action_int5(int*,int*,int*,int*,int*);
void ptr_action_string(std::string*);
void ptr_action_string5(std::string*,std::string*,std::string*,std::string*,std::string*);

void mv_action_int(int&&);
void mv_action_int5(int&&,int&&,int&&,int&&,int&&);
void mv_action_string(std::string&&);
void mv_action_string5(std::string&&,std::string&&,std::string&&,std::string&&,std::string&&);

void not_overload_int(int);
void not_overload_string(std::string);
void overload(int);
void overload(std::string);

void nest_action1();
void nest_action2();
void nest_action3();
void nest_action4();
void nest_action5();

template<class T>
void action_T(T value)
{
    return;
}

template<class T>
T func_T()
{
    return T();
}