#include <iostream>
using namespace std;

// procedures used to print different heads

void PartedHair()
// prints a parted hair" scalp
{
   cout << "  |||||||///////// " << endl;
}

void Hair()
// prints a "straight-up" or frightened" scalp
{

    cout << "  ||||||||||||||| " << endl;
}

void Sides()
{
   cout <<  "  |             |  " << endl;
}

void Eyes()
{
   cout << "   |oooooooooooo |  " << endl;

}

void Ears()
{
   cout << "  _|             |_ " << endl;
   cout << " |_               _|" << endl;
}

void Smile()
{
   cout << "   |  |______|  |   " << endl;
}

int main()
{
    Hair();
    Sides(); Sides();
    Eyes();
    Ears();
    Smile(); smile();
    Sides(); Sides();
    return 0;
}
