// Circular tour -> Gas station -> One and a same problem 

// Using queue it can be solved easily 

/*
int tour(petrolPump p[],int n)
    {
       //Your code here
       
       int deficit = 0 ;
       int balance = 0 ;
       int start = 0 ; 
       
       for( int i = 0; i < n; i++ ) {
           balance += p[i].petrol - p[i].distance ;
           if( balance < 0) {
               deficit += balance ; // Itni kam pad rhi hai 
               start = i + 1 ;
               balance = 0 ;
           }
           
       }
       
       if( deficit + balance >= 0) {
           return start ;
       } else {
           return -1 ;
       }
    }

*/