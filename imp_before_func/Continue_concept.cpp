// USE of Continue 


// #include<iostream>
// using namespace std;
 
// int main()
// {

// for(int i = 0; i<5; i++)
// {
//     cout<<"Hi"<<endl;
//     cout<<"Hey"<<endl;
//     continue;
//     cout<<"Ise bhi print krde bhai"<<endl;
// }

// return 0;
// }


#include<iostream>
using namespace std;
 
int main()
{

for(int i = 0; i<5; i++)
{
    for(int j = i; j<=5; j++)
    {
        if(i+j == 10)
        {
            break;
        }
        cout<< i << " ";
    }
}

return 0;
}