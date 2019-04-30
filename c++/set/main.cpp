
#include <set>

using namespace std;

class Bag
{
    int id;

public:
    Bag(){}
    ~Bag(){}

    bool operator<(const Bag& b) const { return b.id < this->id;}
};

int main()
{
    Bag b;
    set<Bag> s;

    s.insert(b);

    return 0;
}
