// Ejemplo de manipulacion de vectores
// Devuelve la cuenta inversa de 9 a 0 (inclusive)
//------------------------------------------------
int a[10];
int b[1];
int main()
{ int i;
  b[0] = 1;
  print(b[0]);
  for (i = 0; i < 10; i++) a[i] = i;
  for (i = 9; i >= 0; i--) print(a[i]);
 
  return 0;
}
