#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>

int calcDist(std::vector<int> v, int start, int end){
    int dist = 0;
    if(start < end){
        return end-start;
    } else {
        return static_cast<int>(v.size() - start + end);
    }
}

int main(){
    std::vector<int> v;
    int n;
    std::cin >> n;
    for(int i=0; i<n; i++){
        int x;
        std::cin >> x;
        v.push_back(x);
    }
    int ans = INT_MAX;
    for (int i=0; i<n; i++){
        int curlen = 0;
        for(int j=0; j<n; j++){
            if(i == j) continue;
            curlen += calcDist(v, i, j) * v.at(j);
        }
        ans = std::min(ans, curlen);
    }

    std::cout << ans << std::endl;

}