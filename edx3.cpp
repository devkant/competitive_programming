#include <fstream>

int main() {
    long long int a[100000],n;
    std::ifstream("input.txt") >> a[0]>> a[1]>> a[2]>> n;
    for(int i=3;i<=n;i++){
      a[i]=a[i-1]+a[i-2]-a[i-3];
      }
    std::ofstream("output.txt") <<a[n]<<"\n";
    return 0;
}
