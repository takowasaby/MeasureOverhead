#include "ClassMethods.h"

ClassMethods::ClassMethods()    {}
ClassMethods::ClassMethods(int) {}

void ClassMethods::operator() ()    { return; }
void ClassMethods::operator() (int) { return; }
void ClassMethods::operator=  (int) { return; }

void ClassMethods::method()        { return; }
void ClassMethods::method_int(int) { return; }

void ClassMethods::static_method()        { return; }
void ClassMethods::static_method_int(int) { return; }

void ClassMethods::nest_method_1() { _nest1Class.nest_method_1(); return; }
void ClassMethods::nest_method_2() { _nest1Class.nest_method_2(); return; }
void ClassMethods::nest_method_3() { _nest1Class.nest_method_3(); return; }
void ClassMethods::nest_method_4() { _nest1Class.nest_method_4(); return; }
void ClassMethods::nest_method_5() { _nest1Class.nest_method_5(); return; }

void ClassMethods::Nest1Class::nest_method_1() { return; }
void ClassMethods::Nest1Class::nest_method_2() { _nest2Class.nest_method_2(); return; }
void ClassMethods::Nest1Class::nest_method_3() { _nest2Class.nest_method_3(); return; }
void ClassMethods::Nest1Class::nest_method_4() { _nest2Class.nest_method_4(); return; }
void ClassMethods::Nest1Class::nest_method_5() { _nest2Class.nest_method_5(); return; }

void ClassMethods::Nest1Class::Nest2Class::nest_method_2() { return; }
void ClassMethods::Nest1Class::Nest2Class::nest_method_3() { _nest3Class.nest_method_3(); return; }
void ClassMethods::Nest1Class::Nest2Class::nest_method_4() { _nest3Class.nest_method_4(); return; }
void ClassMethods::Nest1Class::Nest2Class::nest_method_5() { _nest3Class.nest_method_5(); return; }

void ClassMethods::Nest1Class::Nest2Class::Nest3Class::nest_method_3() { return; }
void ClassMethods::Nest1Class::Nest2Class::Nest3Class::nest_method_4() { _nest4Class.nest_method_4(); return; }
void ClassMethods::Nest1Class::Nest2Class::Nest3Class::nest_method_5() { _nest4Class.nest_method_5(); return; }

void ClassMethods::Nest1Class::Nest2Class::Nest3Class::Nest4Class::nest_method_4() { return; }
void ClassMethods::Nest1Class::Nest2Class::Nest3Class::Nest4Class::nest_method_5() { _nest5Class.nest_method_5(); return; }

void ClassMethods::Nest1Class::Nest2Class::Nest3Class::Nest4Class::Nest5Class::nest_method_5() { return; }
