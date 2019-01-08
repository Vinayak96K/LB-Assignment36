#include"MyHeader.h"

void Pattern::Pattern1(int iRow)
{
    for(i=1;i<=iRow;i++)
    {
        for(j=iRow; j>0; j--)
        {
            if(j>i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<j<<" ";
            }
        }
        for( k=1; k<i ;k++)
        {
            cout<<k+1<<" ";
        }
        cout<<"\n";
    }

    for(i=iRow-1; i>0;i--)
    {
        for(j=iRow;j>0;j--)
        {
            if(j<=i)
            {
                cout<<j<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        for(k=1 ; k<i; k++)
        {
            cout<<k+1<<" ";
        }
        cout<<"\n";
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern::Pattern2(int iRow)
{
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    for(i=(iRow-1) ; i>0 ; i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern::Pattern3(int iRow)
{
    for(i=1;i<=iRow;i++)
    {
        for(j=iRow; j>i; j--)
        {
            cout<<" ";
        }
        for( k=1; k<=i ;k++)
        {
            cout<<k<<" ";
        }
        cout<<"\n";
    }

    for(i=iRow-1; i>0;i--)
    {
        for(j=iRow; j>i; j--)
        {
            cout<<" ";
        }
        for( k=1; k<=i ;k++)
        {
            cout<<k<<" ";
        }
        cout<<"\n";
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern::Pattern4(int iRow)
{
    for(i=1;i<=iRow;i++)
    {
        for(j=iRow; j>i; j--)
        {
            cout<<" ";
        }
        for( k=1; k<=i ;k++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern::Pattern5(int iRow)
{
    for(i=iRow; i>0;i--)
    {
        for(j=iRow; j>i; j--)
        {
            cout<<" ";
        }
        for( k=1; k<=i ;k++)
        {
            cout<<k<<" ";
        }
        cout<<"\n";
    }

    for(i=2;i<=(iRow);i++)
    {
        for(j=iRow; j>i; j--)
        {
            cout<<" ";
        }
        for( k=1; k<=i ;k++)
        {
            cout<<k<<" ";
        }
        cout<<"\n";
    }
}