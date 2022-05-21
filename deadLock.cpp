#include <bits/stdc++.h>
using namespace std;
// calculate minimum number of resources needed

int min_resource(int process, int need) {
   int calculate = 0;
   calculate = process * (need - 1) + 1;
   return calculate;
}
int main() {
   int process , need;
   cout << "Enter the number of processes: ";
   cin >> process;
   cout << "Enter the number of resources need: ";
   cin >> need;
   cout << "minimum required resources are : " <<min_resource(process, need);
   return 0;
}

// calculate maximum number of resources needed


// int max_resource(int process, int need) {
//    int calculate = 0;
//    calculate = process * (need + 1) - 1;
//    return calculate;
// }
// int main() {
//     int process , need;
//    cout << "Enter the number of processes: ";
//    cin >> process;
//    cout << "Enter the number of resources need: ";
//    cin >> need;
//    cout << "max required resources are : " <<max_resource(process, need);
//    return 0;
// }
