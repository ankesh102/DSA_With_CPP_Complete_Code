// Basic Understanding of Switch Case : How it works 

#include<iostream>
using namespace std;
 
int main()
{

    char n = '1';
    switch( n )
    {
        case 1 : cout<< "First" <<endl;
                break;
        case 2 : cout<< "Second "<<endl;
                break;
        case '1': cout<< " Third " << endl;
                break;
        case 10: cout<< "Our Goal " <<endl;
                break;
        default: cout<< "This is our default case " <<endl;
    }

return 0;
}