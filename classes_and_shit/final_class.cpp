class A {
public:
	virtual const char* getName() { return "A"; }
};

class B final : public A { // note use of final specifier here
public:
	virtual const char* getName() override { return "B"; }
};

class C : public B { // compile error: cannot inherit from final class
public:
	virtual const char* getName() override { return "C"; }
};
