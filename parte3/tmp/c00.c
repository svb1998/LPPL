// Ejemplo de uso: operadores aritmeticos.
// Debe devolver el mismo numero elevado al cuadrado
//--------------------------------------------------
int func (int a){
  return (((((2 * a) - a) + a) / 2) * a);
}
int main ()
{ int a;

  read(a);
  a = func(a);
  print(a);

  return 0;
}
