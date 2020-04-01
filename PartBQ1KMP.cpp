#include <iostream>
using namespace std;
void foo( int pie[], string str ,int length)
{
    int j=0; 
    pie[0]=0;  //because the value always starts from 0
    for( int i=1; i<length; i++ ) 
    {
        if ( str[i] == str[j] )
        {   j++;
        	pie[i]=j; //since its a match so saving pie value
        }
        else
        j=0; //no match so j=0;
        if( str[i] == str[j] )
        j++; //since matching again so incremented value has to be saved as pie 
        pie[i]=j; 
    }	
}

int main()
{
    int pie[9];
    string str="mueedabdulmueed";
    foo(pie, str, 9);
    for( int i=0; i<9; i++)
    	cout<<pie[i]<<"\t";
    return 0;

}
