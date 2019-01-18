class ClassMethods
{
public:
    ClassMethods();
    ClassMethods(int);

    void operator() ();
    void operator() (int);
    void operator=  (int);

    void method();
    void method_int(int);

    static void static_method();
    static void static_method_int(int);

    void nest_method_1();
    void nest_method_2();
    void nest_method_3();
    void nest_method_4();
    void nest_method_5();

private:
    class Nest1Class
    {
    public:
        void nest_method_1();
        void nest_method_2();
        void nest_method_3();
        void nest_method_4();
        void nest_method_5();
    private:
        class Nest2Class
        {
        public:
            void nest_method_2();
            void nest_method_3();
            void nest_method_4();
            void nest_method_5();
        private:
            class Nest3Class
            {
            public:
                void nest_method_3();
                void nest_method_4();
                void nest_method_5();
            private:
                class Nest4Class
                {
                public:
                    void nest_method_4();
                    void nest_method_5();
                private:
                    class Nest5Class
                    {
                    public:
                        void nest_method_5();
                    };
                    Nest5Class _nest5Class;
                };
                Nest4Class _nest4Class;
            };
            Nest3Class _nest3Class;
        };
        Nest2Class _nest2Class;
    };
    Nest1Class _nest1Class;
};