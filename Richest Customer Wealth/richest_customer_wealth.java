class Solution {
    public int maximumWealth(int[][] accounts) {
        int total = customerWealth(accounts);
        return total;
    }
    
    static int customerWealth(int[][] arr){
        int total = 0;
        for(int i=0; i<arr.length; i++){
            int sum = 0;
            for(int j=0; j<arr[i].length; j++){
                sum+=arr[i][j];
            }
            
            if(sum>total){
                total=sum;
            }
        }
        return total;
    }
}