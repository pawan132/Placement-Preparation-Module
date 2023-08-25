    static int[] topoSort(int V, ArrayList<ArrayList<Integer>> adj) {
        Stack<Integer> stack = new Stack<Integer>();
        Set<Integer> visited = new HashSet<Integer>();
        for(int i=0;i<V;i++) {
            if(!visited.contains(i))
                topoSortHelper(i, adj, visited, stack);
        }
        int[] result = new int[stack.size()];
        int j=0;
        while(!stack.isEmpty()) {
            result[j] = stack.pop();
            j++;
        }
        return result;
    }
    
    public static void topoSortHelper(int node, ArrayList<ArrayList<Integer>> adjList, Set<Integer> visited, Stack<Integer> stack) {
        visited.add(node);
        for(int adj : adjList.get(node)) {
            if(visited.contains(adj) == false) {
                topoSortHelper(adj, adjList, visited, stack);
            }
        }
        stack.push(node);
    }
}