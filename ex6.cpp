#include <iostream>
using namespace std;
int main(){
    int arr[6] = {0,3,6,7,8,11};
    int value = 0;
    for (int i=0; i<6; i++){
        if (value <= arr[i+1]){
            value = arr[i+1];
        }
        cout << value << " ";
    }

    return 0;
}
