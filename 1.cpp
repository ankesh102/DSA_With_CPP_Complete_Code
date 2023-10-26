#include <iostream> 
using namespace std;

class Sample { 
    public:

        int a;

    Sample(int x = 0) {
         a = x;
        }

    Sample operator-(Sample& obj) {
        Sample result ;
        result.a = a - obj.a ;
        result.a -= 10 ;
        result.a -= obj.a ;
        return result ;
    } 

    void display() {
    cout << a;
    }
};

int main() {

    Sample S1(22);

    Sample S2(6);

    Sample S3 =  S1 - S2;
    S3.display(); 
return 0;
}