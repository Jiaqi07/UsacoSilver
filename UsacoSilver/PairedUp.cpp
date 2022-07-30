//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//typedef long long ll;
//
//struct cow{
//    ll amount, milk;
//    cow (ll amount0, ll milk0) : amount(amount0), milk(milk0){};
//};
//
//bool cmp(cow a, cow b){
//    return a.milk<b.milk;
//}
//
//int main(){
////    freopen("pairup.in","r",stdin);
////    freopen("pairup.out","w",stdout);
//
//    ll N, X, Y;
//    cin >> N;
//
//    vector<cow> cows;
//
//    for(ll i = 0; i < N; ++i){
//        cin >> X >> Y;
//        cows.emplace_back(X, Y);
//    }
//    sort(cows.begin(), cows.end(), cmp);
//
//    ll l = 0, r = cows.size()-1, maxAns=-999;
//    while(l < r){
//        if(cows[l].milk+cows[r].milk>maxAns){
//            maxAns = cows[l].milk+cows[r].milk;
//        }
//
//        if(cows[l].amount > 1){
//            --cows[l].amount;
//        }
//        else{
//            ++l;
//        }
//
//        if(cows[r].amount > 1){
//            --cows[r].amount;
//        }
//        else{
//            --r;
//        }
//    }
//    cout << maxAns;
//    return 0;
////    for(cow x : cows){
////        cout << x.amount << ": " << x.milk << '\n';
////    }
//}