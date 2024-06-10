class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	   if(X>=V){
	       return -1;
	   }
	 
	  
	   int dis[V],i,j;
	   bool vis[V];
	   
	   for(i=0;i<V;i++){
	       vis[i]=false;
	       dis[i]=INT_MAX;
	   }
	   
	   queue<int> q;
	   q.push(0);
	   dis[0]=0;
	   vis[0]=true;
	   while(!q.empty()){
	       int curr=q.front();
	       q.pop();
	       for(auto x:adj[curr]){
	           if(!vis[x]){
	               dis[x]=dis[curr]+1;
	               q.push(x);
	               vis[x]=true;
	           }
	       }
	   }
	   
	  if(dis[X]==INT_MAX){
	      dis[X]=-1;
	  } 
	   return dis[X];
	}
};
