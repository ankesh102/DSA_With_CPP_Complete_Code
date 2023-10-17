#include<iostream>
#include<stack>
using namespace std;
 
int main()
{

    string name = "Ankesh" ;

    stack<char> st ;

    for(int i = 0; i < name.length(); i++ ) {
        st.push(name[i]) ;
    }

    string ans = "" ;

    // for( int i = 0 ; i < name.length(); i++ ){
    //     ans += st.top() ;
    //     st.pop() ;
    // }

    while( !st.empty()) {
        ans += st.top() ;
        st.pop() ;
    }

    cout << " The reversed string is : " << ans << endl ; 


return 0;
}