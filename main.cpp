#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int i;
    for (i = 1; i < argc; i++)
    {
        cout << i << "th argument: ";
        cout << argv[i] << endl;
    }

    cout << "gimme" << endl;

    cin >> i;
    cout << "gave me: " << i << endl;

    return 0;
}
