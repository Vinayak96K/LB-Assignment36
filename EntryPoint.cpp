#include "MyHeader.h"

int main(int argc, char const *argv[])
{
    int iNo=0;
    bool running=true;
    Pattern pObj1;

    cout<<"Enter input:";
    cin>>iNo;

    cout<<"Pattern 1:\n\n";
    pObj1.Pattern1(iNo);

    cout<<"\nPattern 2:\n\n";
    pObj1.Pattern2(iNo);

    cout<<"\nPattern 3:\n\n";
    pObj1.Pattern3(iNo);
    
    cout<<"\nPattern 4:\n\n";
    pObj1.Pattern4(iNo);

    cout<<"\nPattern 5:\n\n";
    pObj1.Pattern5(iNo);


    return 0;
}