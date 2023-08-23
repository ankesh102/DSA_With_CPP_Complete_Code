#include<iostream>
using namespace std;

int power_x_y( int x, int y)
{
    // Base case 
    if(y==0) return 1 ; 

    if(y == 1) return x ;

    // Recursive Call 
    if(y % 2 != 0)
    {
        // if b is odd
        return x*power_x_y( x, y/2)*power_x_y( x, y/2) ;

    } else {
        // if b is even 
        return power_x_y( x, y/2)*power_x_y( x, y/2) ;
    }
}
 
int main()
{
    int x, y ;
    cout << "Please enter the value of x and y : " << endl ;
    cin >> x >> y ;

    int res_power = power_x_y(x, y) ;

    cout << "The result of x to the power y is : " << res_power << endl ;


return 0;
}