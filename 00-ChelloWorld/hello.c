#include <stdio.h>

int main() {
    FILE *Archivo;
    Archivo = fopen("output.txt", "w");
    if (Archivo)
    {
      fprintf(Archivo, "Hello, World!");
    }else{
      printf("Error al abrir el archivo");
    }
     return 0;  
}