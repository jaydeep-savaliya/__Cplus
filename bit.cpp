#include <iostream>
using namespace std;
int main(){
    int a, b, c, d;
    int N=1;
for(a=1; a<=10; a++){
    for(b=1; b<=10; b++){
        for(c=1; c<=10; c++){
            for(d=1; d<=10; d++){
                if((a != b && a != c && a != d) && (b != c && b != d) && (c != d) && (((a&b) | c) ^ d == N)){ 
                        printf("The distinct integers are: %d, %d, %d, and %d\n", a, b, c, d);
                        break; 
                }

            }
        }
    }
}

}