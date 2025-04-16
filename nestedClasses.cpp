#include <iostream>
using namespace std;

class nest
{
public:
    class display
    {
    private:
        int S;

    public:
        void add()
        {
            S = 12 + 10 + 51;
        }

        void show()
        {
            cout << "The sum is: " << S << endl;
        }
    };
};

int main()
{
    nest ::display D;
    D.add();
    D.show();

    return 0;
}