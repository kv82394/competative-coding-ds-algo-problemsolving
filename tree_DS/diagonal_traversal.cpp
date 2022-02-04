#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


vector<int> diagonal(Node *root);

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}



int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);

        vector<int> diagonalNode = diagonal(root);
        for(int i = 0;i<diagonalNode.size();i++)
        cout<<diagonalNode[i]<<" ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */


vector<int> diagonal(Node *root)
{
   vector<int> ans;
   if(root==NULL)return ans;
   map<int,vector<int>> mp;
   stack<pair<Node*,int>> q;
   pair<Node*,int> p1;
   p1.first = root;
   p1.second = 0;
   q.push(p1);
   while(!q.empty()){
       p1 = q.top();
       q.pop();
       Node* temp = p1.first;
       int index = p1.second;
       //cout << temp->data<<" ";
       mp[index].push_back(temp->data);
       //cout<< index <<" "<<temp->data<<endl;
        if (temp->right!=NULL){
           p1.first = temp->right;
           p1.second = index;
           q.push(p1);
       }
       if (temp->left!=NULL){
           p1.first = temp->left;
           p1.second = index+1;
           q.push(p1);
       }

   }
   for(auto it = mp.begin();it!=mp.end();it++){
       int x = it->first;
       int si = mp[x].size();
       //cout << x <<" ->";
       for (int i = 0 ;i<si;i++){
           //cout << mp[x][i]<<" ";
           ans.push_back(mp[x][i]);
       }
       //cout << endl;
   }
   return ans;
   
}
