#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int max_;
    cin>>a>>b>>c;
    if ((a+b)*c > a*(b+c))
        max_ = (a+b)*c;
    else
        max_ = a*(b+c);
    a*b*c > max_ ? max_ = a*b*c:max_ = max_;
    a+b+c > max_ ? max_ = a+b+c:max_ = max_;
    cout << max_ << endl;
    return 0;
}
