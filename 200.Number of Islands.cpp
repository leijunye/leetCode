class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
     int sum=0;                                   //记录陆地的个数
     for(int i=0;i<grid.size();i++)
     {
         for(int j=0;j<grid[0].size();j++)
           {   if(grid[i][j]=='1')                //对grid内的每一个数逐个遍历 
             {  search(grid,i,j);                 //若发现1则调用search函数，并sum+1
                sum++;
             }
              if(grid[i][j]=='0')continue;         //若发现0则跳过
           }
     }
     return sum;
    }
    
    void search(vector<vector<char>>& grid,int i,int j){
         grid[i][j]='2';                                           //让已发现的1赋值为2，标记为以被遍历
         if(i-1>=0&&grid[i-1][j]=='1')search(grid,i-1,j);          //对每个位置的上下左右进行递归遍历
         if(j-1>=0&&grid[i][j-1]=='1')search(grid,i,j-1);
         if(i+1<grid.size()&&grid[i+1][j]=='1')search(grid,i+1,j);
         if(j+1<grid[0].size()&&grid[i][j+1]=='1')search(grid,i,j+1);
    }
};