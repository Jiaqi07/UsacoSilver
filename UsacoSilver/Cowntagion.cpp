//// http://www.usaco.org/index.php?page=viewproblem2&cpid=1062
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<vector<int>> s;
//
//int dfs(int curr, int parent){
//    int connections = s[curr].size();
//
//    if(parent != -1) --connections; //Remove parent connection if present
//
//    int result = connections;
//    for(int i = 1; i <= connections; i *= 2) ++result;
//
//    for(int path : s[curr]){
//        if(path != parent){
//            result += dfs(path, curr);
//        }
//    }
//    return result;
//}
//
//int main(){
//    int N;
//    cin >> N;
//
//    s = vector<vector<int>>(N); //Adjacency List
//
//    for(int i = 0; i < N-1; ++i){
//        int a, b;
//        cin >> a >> b;
//        s[--a].push_back(--b);
//        s[b].push_back(a);
//    }
//
//    cout << dfs(0, -1);
//    return 0;
//}