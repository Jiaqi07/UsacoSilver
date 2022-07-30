//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(){
////    freopen("highcard.in","r",stdin);
////    freopen("highcard.out","w",stdout);
//
//    int N;
//    cin >> N;
//
//    vector<int> elsie, bessie;
//    vector<bool> elsieOwns(N*2);
//    for(int i = 0; i < N; ++i){
//        int index;
//        cin >> index;
//        elsieOwns[index-1] = true;
//    }
//    for(int i = 1; i <= 2*N; ++i){ //Makes everything sorted while doing input
//        if(elsieOwns[i-1]){
//            elsie.emplace_back(i);
//        }
//        else{
//            bessie.emplace_back(i);
//        }
//    }
//
//    int bes = 0, els = 0, wins=0;
//    while(bes < N && els < N){
//        if(elsie[els] < bessie[bes]){
//            ++wins;
//            ++bes;
//            ++els;
//        }
//        else{
//            ++bes;
//        }
//
//    }
//    cout << wins;
//    return 0;
//}