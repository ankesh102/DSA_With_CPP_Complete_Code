#include<iostream>
using namespace std;

// Function which find target element in an array 
bool targetPresent(int arr[][3] , int target, int row, int col)
{
    for( int i = 0; i < row; i++)
    {
        for(int j = 0 ; j < col; j++)
        {
            if(arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

// Function which calculate Row_Wise Sum of 2D Array : 
void sumRowWise(int arr[][3], int row, int col)
{
    for(int row_ = 0 ; row_ < row ; row_++ )
    {
        int sum = 0; 
        for( int col_ = 0 ; col_ < col; col_++)
        {
            sum += arr[row_][col_];
        }
        cout<< "Sum of "<< (row_+1) << " row is : " << sum <<  endl ; 
    }

}

// Function which calculate sum Column Wise 
void colWiseSum(int  arr[][3] , int row, int col)
{
    for(int column = 0; column < col; column++)
    {
        int sum = 0; 
        for( int row_ = 0; row_ < row; row_++)
        {
            sum += arr[row_][column];
        }
        cout<< "Sum of " << column+1 << " column is : " << sum << endl ; // column+1 -> to get correct indexing 
    }
}
 
int main()
{

    // Create 2D Array 
    int arr[3][3];
    // Create 2D Array 
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; // Hard Code of all element in an 2D array -> starts from arr[0][0]
    // int arr[3][4] = {{1,2,3,4} ,{5,6,7,8} ,{11,22,33,44} }; // Row wise initialization 


    // Take input of 2D array - Row Wise 
    for(int i = 0; i < 3; i++)
    {
        cout<< "Enter " << i << " row " << endl;
        for(int j = 0; j < 3; j++)
        {
            cout<< "Enter "<<j<<" col :"<< endl;
            cin >> arr[i][j] ; 
        }
    } 


/*
    // Take input of 2D Array - ColumnWise 
    for( int col = 0; col < 3; col++)
    {
        for(int row = 0; row < 3; row++)
        {
            cin >> arr[row][col] ;
        }
    }
*/
    // Print the output of 2D Array : 
    for( int i = 0; i < 3 ; i++)
    {
        for( int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }


    // Searching in an 2D Array
    cout<< "Enter the element you want to search " << endl; 
    int target;
    cin>>target;

    if(targetPresent(arr, target, 3, 3))
    {
        cout<< "Element is Present " << endl;
    } else {
        cout<< "Element not Present " << endl;
    }

    // Row Wise Sum OF 2D Array :  
    sumRowWise(arr, 3, 3);

    // Column wise Sum of an 2D Array 
    colWiseSum(arr, 3, 3);

return 0;
}