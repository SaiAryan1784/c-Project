#include "functions.h" // Function definitions
static int getsum(int x, int y){
    return x + y;
}

int otherfunction(int x, int y){
    return getsum(x, y);
}
