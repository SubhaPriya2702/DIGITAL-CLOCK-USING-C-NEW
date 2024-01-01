#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
    int h=0,m=0,s=0,h1=0,m1=0,s1=0;
    cout<<"Enter time in format HH:MM:SS\n\n";
    cin>>h>>m>>s;

    cout<<"Set alarm in HH:MM:SS\n\n";
    cin>>h1>>m1>>s1;

    if(h<24 && m<60 && s<60)
    {
    start:
    for(h;h<24;h++)
    {
        for(m;m<60;m++)
        {
            for(s;s<60;s++)
            {
                //This will clear the existing data in the screen
                system("CLS");
                cout<<h<<" : "<<m<<" : "<<s;
                //This will keep stopping the loop for 1 second
                for(double i=0;i<99999999;i++)
                {
                    i++;
                    i--;
                }
                //This condition is used to check AM or PM
                if(h<12)
                {
                    cout<<"AM";
                }
                else
                {
                    cout<<"PM";
                }
                if(h==h1 && m==m1 && s==s1)
                {
                    cout<<"\a\a\a\a\a\a\a\a\a";
                }
            }
            s=0;

        }
        m=0;
    }
    h=0;
    //This will never stop the loop
    goto start;
    }
    else
    {
      cout<<"Enter correct time format:";
    }
}
