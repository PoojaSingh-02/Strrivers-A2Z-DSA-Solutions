 class Solution {
    public:
    int whileLoop(int d) {
        int sum=0;
        int count=0;
        int num=1;
         while(count<50) {
            if(num%10==d) {
              sum=sum+num;
              count++;  
            }
            num++;
         }
         return sum;  
    }
};
