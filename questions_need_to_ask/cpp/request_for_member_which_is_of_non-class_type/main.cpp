
class Foo
{
public:
	Foo(){}
	explicit Foo(int a){}
	~Foo(){}

	void init(Foo* foot){}
};

int main()
{
	Foo f1(4);
	Foo f();

	f.init(&f1);	
}
