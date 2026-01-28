int sum = 0;
        int prod = 1;

        while(n!=0){
            int rem = n%10;
            prod = prod * rem;
            sum = sum + rem;
        }
        int ans = n/10;
        return ans;