#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    
    
    int a,b;
    int numerorand;
    int respuesta, i;
    int intentos = 0, dif;
    
    printf("Seleccione su dificultad \n");
   printf("1.-Facil\n2.-Medio\n3.-Dificl\n");
   scanf("%d", &dif);
   
    
    inicio: 
    srand(time(NULL));
   numerorand = rand() % 1001;
   
   
   
  
   switch(dif){
       
       case 1:
           intentos = 15;
                   break;
       case 2:
           intentos = 10;
           break;
           
       case 3:
           intentos = 5;
           break;
   }
       
   i = intentos;
       
   
   printf("%d\n", numerorand);
  do{
       
       
   
  
   
      
   
   while((a != numerorand)&&(intentos != 0)){
       
       printf("Te quedan %d intentos\n", intentos);
       
       
      
       

       
        intentos --;
       
        
    printf("Adivina el numero entre 1 y 1000 \n");
        scanf("%d", &a);
  
    
        
        if(a==numerorand){
    
    printf("¡Lo lograste! \n");}
    
    
    

else{
        if(a<numerorand){
            
            printf("¡Es mas arriba!\n");
        
        
        }else{
            
            printf("¡Es mas abajo!\n");}
}
 

   

}
  fin: 
   printf(" 1.- Volver a jugar \n 2.- Salir \n");
   printf("Ingrese su opcion: ");
   
   scanf("%d", &respuesta);
   
   
   if(respuesta == 1){
       goto inicio;
   
      
   
   }
   
   

   
   
   
   
   
   
   
   }while((respuesta != 2)&&(intentos>=0));
   
   
   
   
   
   return 0;
}