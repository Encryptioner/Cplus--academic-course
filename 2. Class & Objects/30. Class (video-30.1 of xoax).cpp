#include <iostream>
//using namespace std;
class cnote
{
public:/*If we don't use this program won't run.. because member will be private.. */
    int mypitch;
    double mduration;
};

int main()
{
    using namespace std;
    cnote qmynote = {0, 0.25};
    cout<<"Pitch = "<<qmynote.mypitch<<endl;
    cout<<"Duration = "<<qmynote.mduration<<endl;
    qmynote.mypitch=-3;
    qmynote.mduration=10;
    cout<<"Pitch = "<<qmynote.mypitch<<endl;
    cout<<"Duration = "<<qmynote.mduration<<endl;
    //return EXIT_SUCCESS;
    return 0;
}
