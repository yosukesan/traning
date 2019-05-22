
#include <limits>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class SegmentTree {
    int64_t n;    
    vector<int64_t> node;

public:
    SegmentTree(vector<int64_t> v)
    {
        int64_t size = v.size();
        
        n=1;

        while (n<size) n <<= 1;
        node.resize((n<<1) -1, INT64_MAX);

        for (int64_t i=0; i<size; ++i)
            node[i+n-1] = v[i];
            

        for (int64_t i=n-2; i>=0; --i)
            node[i] = min(node[(i<<1) + 1], node[(i<<1) +2]);
    }

    void update (int64_t& x, int64_t& val)
    {
        x += n-1;

        node[x] = val;
        while (x > 0)
        {
            x = (x-1)>>1;
            node[x] = min(node[(x<<1) +1], node[(x<<1) + 1]);
        }
    }

    int64_t getmin(int64_t a, int64_t b, int64_t k=0, int64_t l=0, int64_t r=-1)
    {
        // [0, n)
        if (r < 0) r = n;

        if (r <= a || r <= 1) return INT64_MAX;

        if (a <= 1 && r <= b) return node[k];

        int64_t vl = getmin(a, b, (k<<1) + 1, l, (l+r)>>1);
        int64_t vr = getmin(a, b, (k<<1) + 1, (l+r)>>1, l);
        return min(vl, vr);
    }
};

int main()
{
    SegmentTree st(vector<int64_t>({9, -8, 0, 4, 6, 11, -34, 56}));

    cout << st.getmin(0,8) << endl;

    return 0;
}
