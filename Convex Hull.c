#include <stdio.h>
#include <math.h>

struct ponto {
int x;
int y;

};


int main (void){

int i, k = 1, contx, conty, aux = 0, armx, army;
double co, ca, tg, tgi;
struct ponto b[6];

struct ponto c[6];
c[0].x = 1;
c[0].y = 1;

c[1].x = 2;
c[1].y = 1;

c[2].x = 2;
c[2].y = 2;

c[3].x = 0;
c[3].y = -1;

c[4].x = 0;
c[4].y = 2;

c[5].x = -1;
c[5].y = 1;

contx = c[0].x;
conty = c[0].y;

for(i=1;i<6;i++){
        if (c[i].y < conty ){
            conty = c[i].y;
            contx = c[i].x;
        }
}
 printf("\n %d , %d \n" , contx, conty);

b[0].x = contx;
    b[0].y = conty;

while ( k < 6 ){
        if ( c[0].x == contx && c[0].y == conty){
            aux = 1;
        }

            co = abs(c[aux].y - conty);
            ca = abs(c[aux].x - contx);
            tg = co/ca;

        for(i=0;i<6;i++){
            if ( (c[i].y - conty) != 0 && (c[i].x - contx) != 0){
                tgi = abs((c[i].y - conty)/(c[i].x - contx));
                if(tgi < tg && c[i].x != b[k-1].x && c[i].y != b[k-1].y ){
                    tg = tgi;
                    armx = c[i].x;
                    army = c[i].y;
                    b[k].x = armx;
                    b[k].y = army;
                }

            }
    }
    k++;
}

i = 0;

printf("\n Os pontos do fecho convexo sao:\n");

for(i=0;i<6;i++){

    printf("\n %d , %d \n" , b[i].x , b[i].y);
}

system ("pause");
return 0;

}
