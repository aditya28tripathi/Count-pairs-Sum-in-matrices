class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	  unordered_map<int,int> mp;
	  
	  
	  for(int i =0;i<n;i++){
	      for(int j =0; j<n;j++){
	            mp[mat2[i][j]]++;
	      }
	      
	  }
	  
	  int count = 0;
	  
	  for(int i =0; i<n;i++){
	      for(int j =0;j<n;j++){
	          count += mp[x-mat1[i][j]];
	      }
	  }
	  
	  return count;
	  
	  
	}
	


};
