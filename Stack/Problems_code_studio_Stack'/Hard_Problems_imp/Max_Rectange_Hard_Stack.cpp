// Famous Stack Hard level Problem 

// max Rectange : Using the concept of Max Rectange Area in histogram 

// GeeksForGeeks 

// Function that include all logic and probelm sloving step by step 

/*
#define MAX 1000 // Why there is need to define MAX 

class Solution{
private: 
    
    vector<int> nextSmallerElements(int* arr, int n) {
        stack<int> s ;
        s.push(-1) ;
        vector<int> ans(n) ;

        for( int i = n-1; i >=0; i-- ) {
            int curr = arr[i] ;
            while(s.top() != -1 && arr[s.top()] >= curr) {
                s.pop() ;
            }

            // Ans is stack ka top 
            ans[i] = s.top() ;
            s.push(i) ;
        }

        return ans ;
    }
    
    vector<int> prevSmallerElements(int* arr, int n) {
        stack<int> s ;
        s.push(-1) ;
        vector<int> ans(n) ;

        for( int i = 0; i < n; i++ ) {
            int curr = arr[i] ;
            while(s.top() != -1 && arr[s.top()] >= curr) {
                s.pop() ;
            }

            // Ans is stack ka top 
            ans[i] = s.top() ;
            s.push(i) ;
        }

        return ans ;
    }

    
    int largestRectangleArea(int* heights, int n) {
        
        // int n = heights.size() ;

        vector<int> next(n);
        next = nextSmallerElements(heights, n) ;

        vector<int> prev(n) ;
        prev = prevSmallerElements(heights, n) ;

        int area = INT_MIN ;

        for( int i = 0; i < n; i++ ) {
            int l = heights[i] ;
            
            if( next[i] == -1) {
                next[i] = n ;
            }
            int b = next[i] - prev[i] - 1 ;

            int newArea = l * b ;
            area = max(area, newArea) ;

        }
        return area ;
    }
    
    
    
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        
        // Compute area for first row 
        
        int area = largestRectangleArea(M[0], m) ;
        // For Remaining rows 
        for( int i = 1; i < n ; i++) {
            for( int j = 0; j < m; j++) {
                // Update row by adding previous row value 
                
                if( M[i][j] != 0) {
                    M[i][j] = M[i][j] + M[i-1][j] ;
                } else {
                    M[i][j] = 0; // AGar base hi na ho to building kaha se banegi
                }
                
            }
            
            // Entire row is updated now after coming out of the loop 
            // Now calculate area 
            area = max( area, largestRectangleArea(M[i], m)); 
        }
        
        return area ;
    }
};
*/



// Same probelem Solution on leetcode having some difference that has been handles 

// Function Solution 

/*
class Solution {

private: 

    vector<int> nextSmallerElements(vector<int> arr, int n) {
        stack<int> s ;
        s.push(-1) ;
        vector<int> ans(n) ;

        for( int i = n-1; i >=0; i-- ) {
            int curr = arr[i] ;
            while(s.top() != -1 && arr[s.top()] >= curr) {
                s.pop() ;
            }

            // Ans is stack ka top 
            ans[i] = s.top() ;
            s.push(i) ;
        }

        return ans ;
    }



    vector<int> prevSmallerElements(vector<int> arr, int n) {
        stack<int> s ;
        s.push(-1) ;
        vector<int> ans(n) ;

        for( int i = 0; i < n; i++ ) {
            int curr = arr[i] ;
            while(s.top() != -1 && arr[s.top()] >= curr) {
                s.pop() ;
            }

            // Ans is stack ka top 
            ans[i] = s.top() ;
            s.push(i) ;
        }

        return ans ;
    }


    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size() ;

        vector<int> next(n);
        next = nextSmallerElements(heights, n) ;

        vector<int> prev(n) ;
        prev = prevSmallerElements(heights, n) ;

        int area = INT_MIN ;

        for( int i = 0; i < n; i++ ) {
            int l = heights[i] ;
            
            if( next[i] == -1) {
                next[i] = n ;
            }
            int b = next[i] - prev[i] - 1 ;

            int newArea = l * b ;
            area = max(area, newArea) ;

        }
        return area ;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {

        int n = matrix.size();
        if (n == 0) return 0; // Handle empty matrix case
        int m = matrix[0].size();

        // Convert characters to integers
        vector<vector<int>> heights(n, vector<int>(m, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                heights[i][j] = matrix[i][j] - '0';
            }
        }

        // Finding area of first row 
        int area = largestRectangleArea(heights[0]);

        // For Remaining rows
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                // Update row by adding previous row value
                if (heights[i][j] != 0) {
                    heights[i][j] = heights[i][j] + heights[i - 1][j];
                } else {
                    heights[i][j] = 0; // If base is zero, building cannot be formed
                }
            }

            // Entire row is updated now after coming out of the loop
            // Now calculate area
            area = max(area, largestRectangleArea(heights[i]));
        }

        return area;
    }
};

*/