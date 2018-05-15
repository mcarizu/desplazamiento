#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define tamanio 5
void cargarArray(int *,int );
void mostraArray(int *, int);
int main()
{

    int numero=10;
    int *punteroEntero=NULL;/*Apunta a nada*/
    int *punteroEnteroI;
    punteroEntero=&numero;
    int *punteroEnteroII;
    int arrayEntero[5];
    int arrayEnteroI[10];
    int tamanio;
    int i;
   printf("carga vector\n");
        arrayEntero[0]=235;
        arrayEntero[1]=879;
        arrayEntero[2]=689;
        arrayEntero[3]=84;
        arrayEntero[4]=584;


    printf("\n---------------\n");
    cargarArray(arrayEntero,tamanio);
    mostraArray(arrayEntero,tamanio);
    printf("\n---------------\n");

    punteroEnteroII=&arrayEntero;/* &arrayEntero p=&x[0] */
    /*printf("arrayEnteros[0]?%d\n",&arrayEntero[0]);
    printf("Puntero Entero II?%d\n",punteroEnteroII);*/
    printf("\n---------------\n");
    printf("muestro desde el puntero\n");
    for(i=0;i<5;i++){
        printf("\n:%d\n",(punteroEnteroII+i));
    }
    printf("\n---------------\n");
    for(i=0;i<5;i++){
        printf("\n:%d\n",*(punteroEnteroII+i));
    }
    printf("\n---------------\n");
     for(i=0;i<5;i++){
        printf("\n:%d\n",(*punteroEnteroII+i));
    }
    printf("\n---------------\n");

/*
    printf("Desplazamiento\n");
    printf("punteroEntero I &:%d\n",&punteroEnteroI);
    printf("punteroEntero I *:%d\n",*punteroEnteroI);
    printf("punteroEntero I :%d\n",punteroEnteroI);

    printf("punteroEntero &:%arrayEnterod\n",&punteroEntero);
    printf("punteroEntero *:%d\n",*punteroEntero);
    printf("punteroEntero  :%d\n",punteroEntero);

    printf("punteroEntero &HEX: %p\n",&punteroEntero);
    printf("punteroEntero *HEX: %p\n",*punteroEntero);
    printf("punteroEntero  HEX: %p\n",punteroEntero);
    numero=sizeof(punteroEntero);
    printf("\nSIZEOF: %d\n",numero);


    if(punteroEntero!=NULL){
        printf("\n---------------\n");
        printf("punteroEntero &:%d\n",&punteroEntero);
        printf("punteroEntero *:%d\n",*punteroEntero);
        printf("punteroEntero  :%d\n",punteroEntero);
        printf("punteroEntero &HEX: %p\n",&punteroEntero);
        printf("punteroEntero *HEX: %p\n",*punteroEntero);
        printf("punteroEntero  HEX: %p\n",punteroEntero);
    }
    if(punteroEntero!=NULL){
        printf("punteroEntero I &:%d\n",&punteroEnteroI);
        printf("punteroEntero I *:%d\n",*punteroEnteroI);
        printf("punteroEntero I :%d\n",punteroEnteroI);
    }  printf("punteroEntero I &:%d\n",&punteroEnteroI);
    printf("punteroEntero I *:%d\n",*punteroEnteroI);
    printf("punteroEntero I :%d\n",punteroEnteroI);
    */
    numero=33;
    int num;

    punteroEntero=&numero;

      printf("punteroEntero   :%d\n",punteroEntero);
      printf("punteroEntero   :%d\n",punteroEntero+1);/*arimetica de Puntero desplazamiento en memoria +1 o -1*/
      printf("punteroEntero  *:%d\n",*punteroEntero);
      printf("punteroEntero  *:%d\n",*punteroEntero+1);
      printf("\n---------------\n");
      for(num=0;num<5;num++){
        printf("punteroEntero   :%d\n",punteroEntero+num);
      }
       printf("\n---------------\n");
       for(num=5;num>0;num--){
        printf("punteroEntero   :%d\n",punteroEntero-num);
      }
      printf("\n---------------\n");
      printf("punteroEntero   :%d\n",punteroEntero);
      punteroEntero=punteroEntero+1;                /*apunta a memoria*/
      printf("punteroEntero   :%d\n",punteroEntero);

    return 0;
}
void cargarArray(int *arrayEntero,int tamanio){

    printf("cargar Array\n");
    for(tamanio=0;tamanio<5;tamanio++){
        printf("cargar un valor para el Array\n");
        scanf("%d",arrayEntero[tamanio]);
    }
}
void mostraArray(int *arrayEntero, int tamanio){

     for(tamanio=0;tamanio<5;tamanio++){
        printf( "valores para del Array\n",arrayEntero[tamanio]);


    }
}
