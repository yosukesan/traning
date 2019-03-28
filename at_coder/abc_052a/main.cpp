
#include <iostream>

using namespace std;

typedef struct rect
{
    int w;
    int h;
} rect_t;

int main()
{
    rect_t rect1;
    rect_t rect2;

    cin >> rect1.w >> rect1.h >> rect2.w >> rect2.h;

    // cout << rect1.w << rect1.h << rect2.w << rect2.w;

    const int area1 = rect1.w * rect1.h;
    const int area2 = rect2.w * rect2.h;

    if (area1 > area2)    
        cout << area1 << endl;
    else if (area1 <= area2)    
        cout << area2 << endl;

    return 0;
}
