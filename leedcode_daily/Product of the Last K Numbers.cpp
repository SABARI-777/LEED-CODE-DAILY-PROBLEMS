

class ProductOfNumbers {
    public:
      vector<int>a;
        
        ProductOfNumbers() {
            
        }
        
        void add(int num) {
            a.push_back(num);
        }
        
        int getProduct(int k) {
            
            long long  n  =  a.size();
            long long  sum=1;
            for(int i=n-1;i>=n-k;i--){
               sum*=a[i];
            }
         
            return sum;
        }
    };
    
   