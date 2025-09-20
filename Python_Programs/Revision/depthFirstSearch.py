'''
Description: Function to explore a graph/tree by going as deep as possible before backtracking
Time Complexity: O(V + E) #visited + edges
Author: Blessing Ugochukwu
Date: 20/09/2025
'''

# tree shown in a set
graph = {
    "A": ["B", "C"],
    "B": ["D", "E"],
    "C": ["F"],
    "D": [],
    "E": [],
    "F": ["G"],
    "G": []
}

visited = set()

def dfs(node):
    if node not in visited:
        # makes sure the node doesn't get explored again
        print(f"Visited: {node}")
        visited.add(node)
        
        # goes through the branches 
        for branch in graph[node]:
            dfs(branch)

# starting with 'A' as it is the starting point of the tree
dfs("A")

# Expected Output: A, B, D, E, C, F, G