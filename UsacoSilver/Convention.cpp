//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//typedef long long ll;
//
//bool decide(ll time, ll N, ll maxBusses, ll capacity, vector<ll> times){
//    //Passed in Middle as time which would be max time
//    ll bussesUsed = 1, earliestTime = times[0], curPassengers = 0;
//
//    for(ll i = 0; i < N; ++i){
//        if(curPassengers>=capacity || times[i]-earliestTime > time){
//            ++bussesUsed;
//            earliestTime = times[i];
//            curPassengers=0;
//        }
//        ++curPassengers;
//    }
//    return bussesUsed <= maxBusses;
//}
//
//int main(){
////    freopen("convention.in","r",stdin);
////    freopen("convention.out","w",stdout);
//
//    ll N, M, C;
//    cin >> N >> M >> C;
//    vector<ll> cows(N);
//
//    for(ll i = 0; i < N; ++i){
//        cin >> cows[i];
//    }
//    sort(cows.begin(), cows.end());
//
//    ll low=0, high=cows[N-1];
//    while(low <= high){
//        ll middle = low + (high-low)/2;
//        if(decide(middle, N, M, C, cows)){
//            high = middle-1;
//        }
//        else{
//            low = middle+1;
//        }
//    }
//    cout << low << '\n';
//}