#include <iostream>
#include <vector>
int main(){
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> v = {{1,0},{2,0},{3,0}};
    for(int i = 0; i < n; i++){
        int a, b, c;
        std::cin >> a >> b >> c;
        std::swap(v[a-1], v[b-1]);
        v[c-1].second++;
    }
    std::cout << std::max(v.at(0).second, std::max(v.at(1).second, v.at(2).second));
}