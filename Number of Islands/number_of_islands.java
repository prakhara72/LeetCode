class Solution {
    public int numIslands(char[][] grid) {
        int c = 0;
        for(int i = 0; i < grid.length; i++){
            for(int j = 0; j < grid[i].length; j++){
                if(grid[i][j] == '1'){
                    c+=1;
                    searchAlgo(grid, i, j);
                }
            }
        }
        
        return c;
    }
    
    public static void searchAlgo(char[][] grid, int i, int j){
        
        if(i<0 || i>=grid.length || j<0 || j>=grid[i].length || grid[i][j] == '0'){
            return;
        }
        
        grid[i][j] = '0';
        searchAlgo(grid, i+1, j);
        searchAlgo(grid, i-1,j);
        searchAlgo(grid, i, j+1);
        searchAlgo(grid, i, j-1);
    }
}