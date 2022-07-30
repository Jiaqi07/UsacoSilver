//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//typedef long long ll;
//
//int main(){
////    freopen("lemonade.in","r",stdin);
////    freopen("lemonade.out","w",stdout);
//
//    ll N, cows = 0;
//    cin >> N;
//
//    vector<ll> line(N);
//    for(ll i = 0; i < N; ++i){
//        cin >> line[i];
//    }
//    sort(line.rbegin(), line.rend());
//
//    for(ll i = 0; i < N; ++i){
//        if(line[i] >= cows){
//            ++cows;
//        }
//        else{
//            break;
//        }
//    }
//    cout << cows;
//}