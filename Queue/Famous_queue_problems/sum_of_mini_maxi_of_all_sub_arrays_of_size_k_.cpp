// In this module we are going to solve the famous problem 

// Sum of Minimum and Maximum Element of all Sub-Arrays of k size 

// Code Implementation

#include<iostream>
#include<deque>
using namespace std;

/*
// 1 way to write this function 
int solve( int *arr, int n, int k ) {

    // 2 deque creation to store maxi and mini of k sizd window 

    deque<int> maxi(k) ;
    deque<int> mini(k) ; 

    // Addition of first k sized window 
    for ( int i = 0; i < k; i++ ) {

        while( !maxi.empty() && arr[maxi.back()] <= arr[i]) {
            maxi.pop_back() ;
        }

        while( !mini.empty() && arr[mini.back()] >= arr[i]) {
            mini.pop_back() ;
        }

        maxi.push_back(i) ;
        mini.push_back(i);
    }

    // Loop me travel karo baki saare window ko traverse krne ke liye
    int ans = 0 ;
    for ( int i = k; i < n; ++i ) {

        ans += arr[maxi.front()] + arr[mini.front()] ;

        // Next Window 
        // Removal 
        while( !maxi.empty() && i - maxi.front() >= k ){
            maxi.pop_front() ;
        }

        while( !mini.empty() && i - mini.front() >= k ){
            mini.pop_front() ;
        }

        // Addition 

        while( !maxi.empty() && arr[maxi.back()] <= arr[i]) {
            maxi.pop_back() ;
        }

        while( !mini.empty() && arr[mini.back()] >= arr[i]) {
            mini.pop_back() ;
        }

        maxi.push_back(i) ;
        mini.push_back(i);  

    }

    // Make sure to consider last wali window 
    ans += arr[maxi.front()]  + arr[mini.front() ] ;

    return ans ;
}

*/
 
// 2 way to write this function 
int solve( int *arr, int n, int k ) {

    // 2 deque creation to store maxi and mini of k sizd window 

    deque<int> maxi(k) ;
    deque<int> mini(k) ; 

    // Addition of first k sized window 
    for ( int i = 0; i < k; i++ ) {

        while( !maxi.empty() && arr[maxi.back()] <= arr[i]) {
            maxi.pop_back() ;
        }

        while( !mini.empty() && arr[mini.back()] >= arr[i]) {
            mini.pop_back() ;
        }

        maxi.push_back(i) ;
        mini.push_back(i);
    }

    int ans = 0 ;
    ans += arr[maxi.front()]  + arr[mini.front()] ;

    // Loop me travel karo baki saare window ko traverse krne ke liye
    for ( int i = k; i < n; i++ ) {

        // Next Window 
        // Removal 
        while( !maxi.empty() && i - maxi.front() >= k ){
            maxi.pop_front() ;
        }

        while( !mini.empty() && i - mini.front() >= k ){
            mini.pop_front() ;
        }

        // Addition 

        while( !maxi.empty() && arr[maxi.back()] <= arr[i]) {
            maxi.pop_back() ;
        }

        while( !mini.empty() && arr[mini.back()] >= arr[i]) {
            mini.pop_back() ;
        }

        maxi.push_back(i) ;
        mini.push_back(i); 

        ans += arr[maxi.front()] + arr[mini.front()] ;

    }

    return ans ;

}


int main()
{

    int arr[7] = {2, 5, -1, 7, -3, -1, -2} ; 
    int k = 4; 
    cout << "Sum of minimum and maximum element in subarray of size "<<k<<" is: " << solve(arr, 7, k) << endl ;

return 0;
}