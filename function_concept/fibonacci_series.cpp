#include <iostream>
using namespace std;

// Function to find nth fibonacci number is
int fibonacci(int n)
{
    int first = 0, second = 1;
    if (n == 1)
    {
        return first;
    }
    else if (n == 2)
    {
        return second;
    }
    else
    {
        int answer;
        while (n > 2){
            int temp = first + second;
            first = second;
            second = temp;
            answer = temp;
            n--;
        }
        return answer;
    }
}

int main()
{
    int n;
    cout << "Please enter the value of n : " << endl;
    cin >> n;

    int answer = fibonacci(n);
    cout << "The " << n << "th fibonacci number is : " << answer << endl;
}