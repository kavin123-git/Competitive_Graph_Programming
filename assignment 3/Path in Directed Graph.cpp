int Solution::solve(int A, vector<vector<int> > &B) {
    map<int, bool> visited;
    map<int, vector<int>> m;
    for(int i = 0; i<B.size(); i++){
        m[B[i][0]].push_back(B[i][1]);
    }
    for(int i = 1; i<=A; i++){
        visited[i] = false;
    }
    queue<int> q;
    q.push(B[0][0]);
    visited[B[0][0]] = true;
    while(!q.empty()){
        int temp = q.front();
        if(temp == A){
            return 1;
        }
        q.pop();
        for(auto i:m[temp]){
            
            if(visited[i] == false){
                q.push(i);
                visited[i] = true;
            }
        }
    }   
    return 0;
    
    
}
