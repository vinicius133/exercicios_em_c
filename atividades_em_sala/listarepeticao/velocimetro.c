#include <stdio.h>

int main() {
    float dist, tempo, soma_dist = 0, soma_tempo = 0;
    
    while (1) {
        scanf("%f %f", &dist, &tempo);
        
        if (dist == -1 && tempo == -1) {
            break;
        }
        
        if (dist == 0 && tempo == 0) {
            if (soma_tempo > 0) {
                printf("Saida: %.2f\n", (soma_dist / soma_tempo) * 3.6);
            }
            soma_dist = 0;
            soma_tempo = 0;
        } else {
            soma_dist += dist;
            soma_tempo += tempo;
        }
    }
    
    return 0;
}