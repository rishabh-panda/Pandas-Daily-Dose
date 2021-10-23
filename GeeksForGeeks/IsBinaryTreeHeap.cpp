//function to count nodes
    int countNodes(struct Node* root)
    {
        if (root == NULL)
            return 0;
            
        return (1 + countNodes(root->left) + countNodes(root->right));
    }
     
     
    bool isCompleteUtil (struct Node* root, int index, int number_nodes)
    {
        // Condition: An empty tree is complete
        if (root == NULL)
            return true;
      
        if (index >= number_nodes)
            return false;
      
        return (isCompleteUtil(root->left, 2*index + 1, number_nodes) &&
                isCompleteUtil(root->right, 2*index + 2, number_nodes));
    }


    bool isHeapUtil(struct Node* root, int min, int max)
    {
        
        if(root==NULL)
        {
            return true;
        }
        
        if(root->data < min || root->data > max)
        {
            return false;
        }
        
        return(isHeapUtil(root->left, min, root->data) && 
               isHeapUtil(root->right, min, root->data));
    }
    
    
    bool isHeap(struct Node* tree) 
    {
        int node_count = countNodes(tree);
        
        int index = 0;
        
        return(isCompleteUtil(tree, index, node_count) && 
               isHeapUtil(tree, INT_MIN, INT_MAX));
    }
