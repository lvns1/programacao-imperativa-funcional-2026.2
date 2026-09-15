#include <stdio.h>

int main() {
    int h, m, s, duracao_seg;
    
    printf("Digite a hora de inicio (hh mm ss): ");
    scanf("%d %d %d", &h, &m, &s);
    printf("Digite a duracao do experimento em segundos: ");
    scanf("%d", &duracao_seg);
    
    int inicio_total_seg = (h * 3600) + (m * 60) + s;
    int fim_total_seg = inicio_total_seg + duracao_seg;
    
    int h_fim = (fim_total_seg / 3600) % 24;
    int m_fim = (fim_total_seg % 3600) / 60;
    int s_fim = fim_total_seg % 60;
    
    printf("Horario de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);
    return 0;
}