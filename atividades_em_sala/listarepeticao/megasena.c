#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, n6;
    
    for (n1 = 2; n1 <= 60; n1 += 2) {
        for (n2 = 1; n2 <= 60; n2 += 2) {
            for (n3 = 2; n3 <= 60; n3 += 2) {
                for (n4 = 1; n4 <= 60; n4 += 2) {
                    for (n5 = 2; n5 <= 60; n5 += 2) {
                        for (n6 = 1; n6 <= 60; n6 += 2) {
                            if (n1 < n2 && n2 < n3 && n3 < n4 && n4 < n5 && n5 < n6) {
                                printf("%d %d %d %d %d %d\n", n1, n2, n3, n4, n5, n6);
                            }
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}