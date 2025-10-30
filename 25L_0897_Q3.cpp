#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cout << "Enter a number:";
    cin >> N;
    int n = sqrt(N);

    if(n*n != N){
        cout << "Not a perfect square" << endl;
        return 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int layer = min(min(i, j), min(n-1-i, n-1-j));
            int sideLen = n - 2*layer;
            int start = (n*n) - (sideLen*sideLen) + 1;

            // offset along the perimeter of the layer
            int di = i - layer, dj = j - layer;
            int offset = 0;

            if(di == 0) offset = dj;                  // top
            else if(dj == sideLen-1) offset = (sideLen-1) + di;    // right
            else if(di == sideLen-1) offset = 2*(sideLen-1) + (sideLen-1-dj);  // bottom
            else offset = 3*(sideLen-1) + (sideLen-1-di);           // left

            int val = start + offset;
            cout << val << "\t";
        }
        cout << endl;
    }
}

