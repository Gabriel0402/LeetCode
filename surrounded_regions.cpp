struct Node{
    int x;
    int y;
    Node(int a,int b): x(a),y(b){}
};

class Solution {
public:
    void solve(vector<vector<char>> &board) {
        int m=board.size();
        if(m==0) return;
        int n=board[0].size();
        queue<Node> q;
        for(int i=0;i<n;i++){
            if(board[0][i]=='O') q.push(Node(0,i));
            if(board[m-1][i]=='O') q.push(Node(m-1,i));
        }
        for(int i=0;i<m;i++){
            if(board[i][0]=='O') q.push(Node(i,0));
            if(board[i][n-1]=='O') q.push(Node(i,n-1));
        }
        while(!q.empty()){
            Node temp=q.front();
            q.pop();
            int x=temp.x;
            int y=temp.y;
            board[x][y]='Y';
            if(x>0 && board[x-1][y]=='O') q.push(Node(x-1,y));
            if(x<m-1 && board[x+1][y]=='O') q.push(Node(x+1,y));
            if(y>0 && board[x][y-1]=='O') q.push(Node(x,y-1));
            if(y<n-1 && board[x][y+1]=='O') q.push(Node(x,y+1));
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O') board[i][j]='X';
                if(board[i][j]=='Y') board[i][j]='O';
            }
        }
        
    }
};