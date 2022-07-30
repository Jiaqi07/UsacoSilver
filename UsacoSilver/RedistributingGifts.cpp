//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <list>
//#include <iterator>
//using namespace std;
//
//int N, maxSum = -1e9;
//list<int> assign, maxList;
//vector<vector<int>> wishlist;
//
//void recursive(int index){
//    if(index >= N){
//        int sum = 0;
//
//        for(int i = 0; i < assign.size(); ++i) {
//            auto it = next(assign.begin(), i);
//            sum += *it-i+1;
//        }
//
//        if(sum > maxSum){
//            maxSum = sum;
//            maxList.clear();
//            for(int i = 0; i < N; ++i){
//                maxList.push_back(*next(assign.begin(), i));
//            }
//        }
//        return;
//    }
//
//    for(int i = 0; i < N; ++i){
//        if(find(assign.begin(), assign.end(), wishlist[index][i]) != assign.end() || wishlist[index][i] <= index){
//            continue;
//        }
//        assign.push_back(wishlist[index][i]);
//        recursive(index+1);
//        assign.remove(wishlist[index][i]);
//    }
//}
//
//
//int main(){
//    cin >> N;
//
//    wishlist.resize(N, vector<int>(N));
//
//    for(int i = 0; i < N; ++i){
//        for(int j = 0; j < N; ++j){
//            cin >> wishlist[i][j];
//        }
//    }
//
//    for(int i = 0; i < N; ++i){
//        assign.push_back(wishlist[0][i]);
//        recursive(1);
//        assign.clear();
//    }
//
//    for(int i = 0; i < N; ++i){
//        cout << *next(maxList.begin(), i) << '\n';
//    }
//
//    return 0;
//}