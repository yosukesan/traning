
#include <iostream>

class Automata
{
    int lang;
    int state;
    int start;
    int end;

public:
    Automata();
    explicit Automata(const int& start, const int&end);
    virtual ~Automata();
    void transition(Automata* a, const int* arr);
    
};

Automata::Automata()
{

}

Automata::~Automata()
{

}

Automata::Automata(const int& start, const int&end)
: start(start), end(end), state(start)
{
    lang = 0;
}

void Automata::transition(Automata* a, const int* arr)
{
    int tmp_lang = g->lang;
    int tmp_state1 = state; 
    int tmp_state2 = state; 

    ++tmp_state1;

    if (tmp_state1)
        abs(arr[state] - arr[tmp_state1]);
    
}

int main()
{
    int arr[] = {2, 9, 4, 5, 1, 6, 10};

    Automata a(0, sizeof(arr)/sizeof(arr[0]));
    Automata f;

    f.transition(&a, arr);

    return 0;
}
