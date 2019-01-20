class Interface
{
public:
    virtual ~Interface() = default;
    virtual void pure_virtual_function()        = 0;
    virtual void pure_virtual_function_int(int) = 0;
};

class Implement : public Interface
{
public:
    void pure_virtual_function()        override;
    void pure_virtual_function_int(int) override;
};

class Base1 
{
public:
    virtual ~Base1() = default;
    virtual void virtual_function();
    virtual void virtual_function_int(int);
};
class Base2 : public Base1 
{
public:
    void virtual_function() override;
    void virtual_function_int(int) override;
};
class Base3 : public Base2
{
public:
    void virtual_function() override;
    void virtual_function_int(int) override;
};
class Base4 : public Base3
{
public:
    void virtual_function() override;
    void virtual_function_int(int) override;
};
class Base5 : public Base4
{
public:
    void virtual_function() override;
    void virtual_function_int(int) override;
};

class Derived1 : public Base1
{
public:
    void virtual_function() override;
    void virtual_function_int(int) override;
};
class Derived2 : public Base2
{
public:
    void virtual_function() override;
    void virtual_function_int(int) override;
};
class Derived3 : public Base3
{
public:
    void virtual_function() override;
    void virtual_function_int(int) override;
};
class Derived4 : public Base4
{
public:
    void virtual_function() override;
    void virtual_function_int(int) override;
};
class Derived5 : public Base5
{
public:
    void virtual_function() override;
    void virtual_function_int(int) override;
};
