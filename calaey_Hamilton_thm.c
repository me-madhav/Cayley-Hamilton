#include<stdio.h>
#include<stdlib.h>

char disp[10][4]={'o',' ',' ',' ',' ',' ',' ',' ',' ',' '};
int mat[9];

void display();

int main(){
    
    int n;

    display();

    for (int i=0; i<9; i++){
        printf("Enter the value at %d position: ",i+1);
        scanf("%d",&n);
        mat[i]=n;
        sprintf(disp[i+1], "%d", n);   // convert int to string
        display();
    }

    int a,b,c,d,e,f,g,h,i;
    a=mat[0];
    b=mat[1];
    c=mat[2];
    d=mat[3];
    e=mat[4];
    f=mat[5];
    g=mat[6];
    h=mat[7];
    i=mat[8];

    int cons,lam,lamsq;

    cons = e*( a*i - c*g )+ h*( c*d - a*f ) - b*( d*i - g*f );
    lam = -( a*(e+i) + e*i - f*h - b*d - c*g );
    lamsq = (a + e + i);

    printf("\n\n");

    printf("  #####    ####    ##      ## ##      ######## ##      ##\n");
    printf("##        ##  ##    ##    ##  ##      ##        ##    ## \n");
    printf("##       ##    ##    ##  ##   ##      #######    ##  ##  \n");
    printf("##      ##########     ##     ##      ##           ##    \n");
    printf("  ##### ##      ##     ##     ####### ########     ##    \n\n");

    printf("##     ##    ####    ##     ## ######## ##      ########   #####   ###   ##\n");
    printf("##     ##   ##  ##   ###   ###    ##    ##         ##    ##     ## ####  ##\n");
    printf("#########  ##    ##  #### ####    ##    ##         ##    ##     ## ## ## ##\n");
    printf("##     ## ########## ## ### ##    ##    ##         ##    ##     ## ##  ####\n");
    printf("##     ## ##      ## ##     ## ######## #######    ##      #####   ##   ###\n\n");

    printf("########## ##     ## ########  #######  ########  ######## ##     ##\n");
    printf("   ##      ##     ## ##       ##     ## ##     ## ##       ###   ###\n");
    printf("   ##      ######### ######   ##     ## ##     ## ######   #### ####\n");
    printf("   ##      ##     ## ##       ##     ## ########  ##       ## ### ##\n");
    printf("   ##      ##     ## ########  #######  ##     ## ######## ##     ##\n");

    printf("\nThe charasteristic Theorem of given matrix is: ");
    printf("n^3");
    if (-lamsq>=0){
        printf(" +");
    }
    if (-lamsq<0){
        printf(" -");
    }
    printf(" %dn^2",(-lamsq<0)? lamsq: -lamsq);
    if (-lam>=0){
        printf(" +");
    }
    if (-lam<0){
        printf(" -");
    }

    printf(" %dn",(-lam<0)? lam: -lam);
    if (-cons>=0){
        printf(" +");
    }
    if (-cons<0){
        printf(" -");
    }
    printf(" %d = 0\n\n",(-cons<0)? cons : -cons);
    
    return 0;
}


void display(){
    system("cls");
    printf("|\t\t\t\t|\n");
    printf("|\t%-3s\t%-3s\t%-3s\t|\n", disp[1], disp[2], disp[3]);
    printf("|\t\t\t\t|\n");
    printf("|\t\t\t\t|\n");
    printf("|\t%-3s\t%-3s\t%-3s\t|\n", disp[4], disp[5], disp[6]);
    printf("|\t\t\t\t|\n");
    printf("|\t\t\t\t|\n");
    printf("|\t%-3s\t%-3s\t%-3s\t|\n", disp[7], disp[8], disp[9]);
    printf("|\t\t\t\t|\n");
}