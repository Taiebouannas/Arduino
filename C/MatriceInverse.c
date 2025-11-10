#include <stdio.h>

typedef float matrix[3][3];

void saisie(matrix m);
float verif(matrix m);
void adjoint(matrix m, matrix adj);
void inverse(matrix adj, matrix inv, float det);
void affichage(matrix m, matrix inv);

void saisie(matrix m){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("M[%d][%d] : ", i, j);
            scanf("%f", &m[i][j]);
        }
    }
}

float verif(matrix m){
    float det = m[0][0]*(m[1][1]*m[2][2] - m[1][2]*m[2][1])
              - m[0][1]*(m[1][0]*m[2][2] - m[1][2]*m[2][0])
              + m[0][2]*(m[1][0]*m[2][1] - m[1][1]*m[2][0]);
    
    if(det == 0){
        printf("La matrice n'a pas d'inverse.\n");
    } else {
        printf("Determinant = %g\n", det);
    }
    return det;
}

void adjoint(matrix m, matrix adj){
    adj[0][0] =  m[1][1]*m[2][2] - m[1][2]*m[2][1];
    adj[0][1] = -(m[1][0]*m[2][2] - m[1][2]*m[2][0]);
    adj[0][2] =  m[1][0]*m[2][1] - m[1][1]*m[2][0];

    adj[1][0] = -(m[0][1]*m[2][2] - m[0][2]*m[2][1]);
    adj[1][1] =  m[0][0]*m[2][2] - m[0][2]*m[2][0];
    adj[1][2] = -(m[0][0]*m[2][1] - m[0][1]*m[2][0]);

    adj[2][0] =  m[0][1]*m[1][2] - m[0][2]*m[1][1];
    adj[2][1] = -(m[0][0]*m[1][2] - m[0][2]*m[1][0]);
    adj[2][2] =  m[0][0]*m[1][1] - m[0][1]*m[1][0];
}

void inverse(matrix adj, matrix inv, float det){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            inv[i][j] = adj[i][j] / det;
        }
    }
}

void affichage(matrix m, matrix inv){
    printf("\nLa matrice saisie est :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%g\t", m[i][j]);
        }
        printf("\n");
    }

    printf("\nLa matrice inverse est :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%.2f\t", inv[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    matrix m, adj, inv;

    saisie(m);

    float det = verif(m);
    if(det == 0){
        return 0;
    }

    adjoint(m, adj);
    inverse(adj, inv, det);
    affichage(m, inv);

    return 0;
}