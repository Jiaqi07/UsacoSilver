//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//    int N, minAns = 1e9;
//    cin >> N;
//
//    int *perm = new int[N];
//    int *final = new int[N];
//    int **check = new int*[N];
//
//    for(int i = 0; i < N; ++i){
//        check[i] = new int[N];
//        perm[i] = i+1;
//
//        for(int j = 0; j < N; ++j){
//            cin >> check[i][j];
//        }
//    }
//
//    while(next_permutation(perm, perm+N)){
//        int count = 0;
//        for(int i = 0; i < N; ++i){
//            int curN = N-1;
//            for(int j = 0; j < N; ++j){
//                if(check[i][j] == perm[i]){
//                    count += j+curN;
//                    break;
//                }
//            }
//        }
//        if(minAns > count){
//            minAns = count;
//            for(int i = 0; i < N; ++i){
//                final[i] = perm[i];
//            }
//        }
//        if(minAns == 0){
//            break;
//        }
//    }
//
//    for(int i = 0; i < N; ++i){
//        cout << final[i] << '\n';
//    }
//
//    return 0;
//}
