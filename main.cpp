//Author: Bianca Cervantes
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main ()
{//declare variables
        unsigned int r;
        unsigned int c;
        char aster='*';

        vector< vector<char> >stars;

        stars.resize(1);
        //gives vextor size

        do{
                cout<<"Enter 2 numbers for rows and columns ABOVE 0."<<endl;
                cin>>r;
                cin>>c;
        }while(r<0 || c<0);
        //asks user for row and column size

        stars.resize(r);
        stars[row].resize(c);
        //resizes to user specified size

        for(int row=0;row<stars.size();row++)
        {

                for(int column=0;column<stars[row].size();column++)
                {
                        cout<<aster;

                }
                cout<<endl;
        }


        return 0;
}

